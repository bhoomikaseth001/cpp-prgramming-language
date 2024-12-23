// 1) Algorithm Partition(A, left, right)
// 2) P = A[left]
// 3) k = right
// 4) For i = right to i > left Do
// 5)     if (A[i] > P) then
// 6)         swap(A[i], A[k])
// 7)         k = k - 1
// 8)     end if
// 9) End For
// 10) swap(A[k], A[left])
// 11) return k
// 12) End Partition


// 1) Algorithm quicksort(A, left, right)
// 2) if (right > left) then
// 3)     q = Partition(A, left, right)
//        // after ‘Partition’ A[left..q-1] ≤ A[q] ≤ A[q+1..right]
// 4)     quicksort(A, left, q - 1)
// 5)     quicksort(A, q + 1, right)
// 6) End quicksort



#include <stdio.h>

// Function to partition the array
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // Choose the last element as pivot
    int i = low - 1;       // Index of smaller element

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            // Swap arr[i] and arr[j]
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    // Swap arr[i + 1] and pivot (arr[high])
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    return i + 1;
}

// Function to implement quicksort
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        // Find the partition index
        int pi = partition(arr, low, high);

        // Recursively sort elements before and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
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
    int arr[] = {70, 30, 40, 50, 20, 80, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: \n");
    printArray(arr, n);

    quickSort(arr, 0, n - 1);

    printf("Sorted array: \n");
    printArray(arr, n);
    printf("Bhoomika Seth \n 230164100156");

    return 0;
}
