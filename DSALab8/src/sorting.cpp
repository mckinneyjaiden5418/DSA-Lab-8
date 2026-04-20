#include "../include/sorting.h"

namespace sorting {
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

	}

	void quick_sort(int arr[], int low, int high) {

	}
}