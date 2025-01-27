#include <iostream>
using namespace std;

// Partition function to rearrange elements
int partition(int arr[], int s, int e) {
    int pivot = arr[s]; // Choosing the first element as pivot
    int count = 0;

    // Count how many elements are less than or equal to the pivot
    for (int i = s + 1; i <= e; i++) {
        if (arr[i] <= pivot) {
            count++;
        }
    }

    // Place the pivot at its correct position
    int pivotIndex = s + count;
    swap(arr[pivotIndex], arr[s]);

    // Sort elements around the pivot
    int i = s, j = e;
    while (i < pivotIndex && j > pivotIndex) {
        while (arr[i] <= pivot) {
            i++;
        }
        while (arr[j] > pivot) {
            j--;
        }
        if (i < pivotIndex && j > pivotIndex) {
            swap(arr[i++], arr[j--]);
        }
    }

    return pivotIndex;
}

// Quick Sort function
void quickSort(int arr[], int s, int e) {
    // Base case: if there's one or no element left
    if (s >= e) {
        return;
    }

    // Partition the array
    int p = partition(arr, s, e);

    // Sort left part
    quickSort(arr, s, p - 1);

    // Sort right part
    quickSort(arr, p + 1, e);
}

int main() {
    int arr[7] = {9, 3, 4, 2, 6, 8, 5};
    int n = 7;

    // Call quick sort on the array
    quickSort(arr, 0, n - 1);

    // Output the sorted array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
