#include "../include/sorting.h"
#include <vector>

namespace sorting {
	void merge(int arr[], int left, int mid, int right);
	int partition(int arr[], int low, int high);

	void insertion_sort(int arr[], int size) {
		for (int i = 1; i < size; i++) {
			int key = arr[i];
			int j = i - 1;

			while (j >= 0 && arr[j] > key) {
				arr[j + 1] = arr[j];
				j--;
			}

			arr[j + 1] = key;
		}
	}

	void bubble_sort(int arr[], int size) {
		for (int i = 0; i < size - 1; i++) {
			for (int j = 0; j < size - i - 1; j++) {
				if (arr[j] > arr[j + 1]) {
					int temp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = temp;
				}
			}
		}
	}

	void selection_sort(int arr[], int size) {
		for (int i = 0; i < size - 1; i++) {
			int smallest_index = i;
			for (int j = i + 1; j < size; j++) {
				if (arr[j] < arr[smallest_index]) {
					smallest_index = j;
				}
			}

			int temp = arr[i];
			arr[i] = arr[smallest_index];
			arr[smallest_index] = temp;
		}
	}

	void merge_sort(int arr[], int left, int right) {
		if (left >= right) return;

		int mid = left + (right - left) / 2;
		merge_sort(arr, left, mid);
		merge_sort(arr, mid + 1, right);
		merge(arr, left, mid, right);
	}

	void merge(int arr[], int left, int mid, int right) {
		int n1 = mid - left + 1;
		int n2 = right - mid;

		std::vector<int> left_arr(n1);
		std::vector<int> right_arr(n2);

		for (int i = 0; i < n1; i++){
			left_arr[i] = arr[left + i];
		}

		for (int j = 0; j < n2; j++) {
			right_arr[j] = arr[mid + 1 + j];
		}

		int i = 0, j = 0, k = left;

		while (i < n1 && j < n2) {
			if (left_arr[i] <= right_arr[j]) {
				arr[k] = left_arr[i];
				i++;
			}
			else {
				arr[k] = right_arr[j];
				j++;
			}
			k++;
		}

		while (i < n1) {
			arr[k++] = left_arr[i++];
		}

		while (j < n2) {
			arr[k++] = right_arr[j++];
		}
	}

	void quick_sort(int arr[], int low, int high) {
		if (low < high) {
			int p = partition(arr, low, high);
			quick_sort(arr, low, p - 1);
			quick_sort(arr, p + 1, high);
		}
	}

	int partition(int arr[], int low, int high) {
		int pivot = arr[low];
		int i = low + 1;
		int j = high;
		while (true) {
			while (i <= j && arr[i] <= pivot) {
				i++;
			}

			while (i <= j && arr[j] > pivot) {
				j--;
			}
			
			if (i <= j) {
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
			else break;
		}

		arr[low] = arr[j];
		arr[j] = pivot;
		return j;
	}
}