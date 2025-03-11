#include <stdio.h>

#define SIZE 17 // 15 original + 2 inserted

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void minHeapify(int heap[], int n, int i) {
    int smallest = i, left = 2 * i + 1, right = 2 * i + 2;
    if (left < n && heap[left] < heap[smallest]) smallest = left;
    if (right < n && heap[right] < heap[smallest]) smallest = right;
    if (smallest != i) {
        swap(&heap[i], &heap[smallest]);
        minHeapify(heap, n, smallest);
    }
}

void buildMinHeap(int heap[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--)
        minHeapify(heap, n, i);
}

void insert(int heap[], int *n, int value) {
    heap[(*n)++] = value;
    buildMinHeap(heap, *n);
}

void heapSort(int heap[], int n) {
    for (int i = n - 1; i > 0; i--) {
        swap(&heap[0], &heap[i]);
        minHeapify(heap, i, 0);
    }
}

void findMaxMin(int heap[], int n, int *max, int *min) {
    *min = heap[0];
    *max = heap[0];
    for (int i = 1; i < n; i++)
        if (heap[i] > *max) *max = heap[i];
}

int main() {
    int heap[SIZE], n = 15;
    printf("Enter 15 integers: ");
    for (int i = 0; i < 15; i++)
        scanf("%d", &heap[i]);
    buildMinHeap(heap, n);
    
    int val1, val2;
    printf("Enter two values to insert: ");
    scanf("%d %d", &val1, &val2);
    insert(heap, &n, val1);
    insert(heap, &n, val2);
    
    heapSort(heap, n);
    printf("Sorted Heap: ");
    for (int i = 0; i < n; i++)
        printf("%d ", heap[i]);
    printf("\n");
    
    heap[5] -= 7;
    heap[n - 1] -= 16;
    
    int max, min;
    findMaxMin(heap, n, &max, &min);
    printf("Max Element: %d\n", max);
    printf("Min Element: %d\n", min);
    
    return 0;
}
