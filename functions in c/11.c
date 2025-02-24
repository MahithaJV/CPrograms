#include <stdio.h>

void array(int a[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d  ", a[i]);
    }
    printf("\n");

    int min = a[0];
    for (int j = 1; j < size; j++) {
        if (a[j] < min) {
            min = a[j];
        }
    }
    printf("min is %d\n", min);

    int max = a[0];
    for (int k = 1; k < size; k++) {
        if (a[k] > max) {
            max = a[k];
        }
    }
    printf("max is %d\n", max);

    printf("diff is %d\n", max - min);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6000};
    int size = sizeof(arr) / sizeof(int);
    array(arr, size);
    return 0;
}

