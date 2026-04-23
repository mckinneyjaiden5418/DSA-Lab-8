#include <iostream>
#include "include/sorting.h"

void print_array(int arr[], int size) {
    for (int i = 0; i < size; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}

void copy_array(int source[], int dest[], int size) {
    for (int i = 0; i < size; i++)
        dest[i] = source[i];
}

int main() {
    int original[] = { 5, 2, 9, 1, 5, 6 };
    int size = 6;

    int arr1[6], arr2[6], arr3[6], arr4[6], arr5[6];

    copy_array(original, arr1, size);
    copy_array(original, arr2, size);
    copy_array(original, arr3, size);
    copy_array(original, arr4, size);
    copy_array(original, arr5, size);

    std::cout << "Original: ";
    print_array(original, size);

    sorting::insertion_sort(arr1, size);
    std::cout << "Insertion Sort: ";
    print_array(arr1, size);

    sorting::bubble_sort(arr2, size);
    std::cout << "Bubble Sort: ";
    print_array(arr2, size);

    sorting::selection_sort(arr3, size);
    std::cout << "Selection Sort: ";
    print_array(arr3, size);

    sorting::merge_sort(arr4, 0, size - 1);
    std::cout << "Merge Sort: ";
    print_array(arr4, size);

    sorting::quick_sort(arr5, 0, size - 1);
    std::cout << "Quick Sort: ";
    print_array(arr5, size);

    return 0;
}