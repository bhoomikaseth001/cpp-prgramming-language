// 1) Algorithm Selection_sort(list, n)
// 2) Pre: list != ∅
// 3) Post: list has been sorted into values of ascending order
// 4) For i = 0 to n - 2 Do
// 5)     Min = i
// 6)     For j = i + 1 to n - 1 Do
// 7)         if (list[j] < list[Min]) then
// 8)             Min = j
// 9)         end if
// 10)     End For
// 11)     swap(list[i], list[Min])
// 12) End For
// 13) End Selection_sort


#include <stdio.h>

// Function to perform selection sort
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        // Find the minimum element in the unsorted part of the array
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Swap the found minimum element with the first element of the unsorted part
        if (minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

// Function to print an array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {60, 20, 10, 40, 50, 70, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: \n");
    printArray(arr, n);

    selectionSort(arr, n);

    printf("Sorted array: \n");
    printArray(arr, n);
    printf("Bhoomika Seth \n 230164100156");

    return 0;
}
