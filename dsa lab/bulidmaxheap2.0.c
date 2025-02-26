#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to heapify a subtree rooted at index i
void maxHeapify(int a[], int n, int i) {
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    if (l < n && a[l] > a[largest])
        largest = l;
    if (r < n && a[r] > a[largest])
        largest = r;

    if (largest != i) {
        int temp = a[i];
        a[i] = a[largest];
        a[largest] = temp;
        maxHeapify(a, n, largest);
    }
}

// Function to build max heap
void buildMaxHeap(int a[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--)
        maxHeapify(a, n, i);
}

// Function to increase a value at a given index
void increaseValue(int a[], int n, int index, int value) {
    a[index] += value;
    
    // Restore max heap property (bubble-up)
    while (index > 0 && a[(index - 1) / 2] < a[index]) {
        int temp = a[index];
        a[index] = a[(index - 1) / 2];
        a[(index - 1) / 2] = temp;
        index = (index - 1) / 2;
    }
}

// Function to delete a value at a specific index
int deleteAtIndex(int a[], int *n, int index) {
    if (*n <= 0 || index >= *n) {
        printf("Invalid index for deletion.\n");
        return -1;
    }

    int deletedValue = a[index];
    a[index] = a[*n - 1]; // Replace with last element
    (*n)--; // Reduce heap size

    maxHeapify(a, *n, index); // Restore heap property

    return deletedValue;
}

// Function to find the maximum value and its index
void findMax(int a[], int n) {
    printf("Max Value: %d at Index: 0 (Root)\n", a[0]);
}

// Function to find the minimum value and its index
void findMin(int a[], int n) {
    int minIndex = n / 2; // Start checking from leaf nodes
    int minValue = a[minIndex];

    for (int i = minIndex + 1; i < n; i++) {
        if (a[i] < minValue) {
            minValue = a[i];
            minIndex = i;
        }
    }

    printf("Min Value: %d at Index: %d\n", minValue, minIndex);
}

// Function to print the heap
void printHeap(int a[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}

int main() {
    int n = 25;
    int a[n];

    srand(time(0)); // Seed for randomness
    for (int i = 0; i < n; i++)
        a[i] = rand() % 100; // Generating numbers between 0-99

    printf("Original Array:\n");
    printHeap(a, n);

    buildMaxHeap(a, n);
    printf("Max Heap:\n");
    printHeap(a, n);

    // a. Increment 5th index value by 10
    increaseValue(a, n, 5, 10);
    printf("After Incrementing Index 5 by 10:\n");
    printHeap(a, n);

    // b. Increment 12th index value by 30
    increaseValue(a, n, 12, 30);
    printf("After Incrementing Index 12 by 30:\n");
    printHeap(a, n);

    // c. Delete value at 17th index
    int deleted1 = deleteAtIndex(a, &n, 17);
    if (deleted1 != -1)
        printf("Deleted value at index 17: %d\n", deleted1);
    printHeap(a, n);

    // d. Delete root value
    int deleted2 = deleteAtIndex(a, &n, 0);
    if (deleted2 != -1)
        printf("Deleted root value: %d\n", deleted2);
    printHeap(a, n);

    // e. Find max value and index
    findMax(a, n);

    // f. Find min value and index
    findMin(a, n);

    return 0;
}
