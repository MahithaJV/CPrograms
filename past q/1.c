#include <stdio.h>

int removeDuplicates(int arr[], int n) {
    int newSize = 0;

    for (int i = 0; i < n; i++) {
        int isDuplicate = 0;

        // Check if arr[i] is already in the unique part of the array
        for (int j = 0; j < newSize; j++) {
            if (arr[i] == arr[j]) {
                isDuplicate = 1;
                break;
            }
        }

        // If not a duplicate, add it to the unique part of the array
        if (!isDuplicate) {
            arr[newSize++] = arr[i];
        }
    }

    return newSize; // Return the new size of the array
}

int main() {
    int arr[] = {1, 2, 2, 4, 4, 4, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int newSize = removeDuplicates(arr, n);

    printf("Array after removing duplicates: ");
    for (int i = 0; i < newSize; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
