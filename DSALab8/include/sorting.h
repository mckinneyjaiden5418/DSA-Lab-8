#ifndef SORTING_H
#define SORTING_H

namespace sorting {
	void insertion_sort(int arr[], int size);
	void bubble_sort(int arr[], int size);
	void selection_sort(int arr[], int size);
	void merge_sort(int arr[], int left, int right);
	void quick_sort(int arr[], int low, int high);
}

#endif