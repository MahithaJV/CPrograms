#include <stdio.h>

int main() {
    int a[10], i, j;
    
    // Input array elements
    for(i = 0; i < 5; i++) {
        printf("Enter element: ");
        scanf("%d", &a[i]);
    }

    int flag = 0;

    // Finding duplicates
    for(i = 0; i < 5; i++) {
        for(j = i + 1; j < 5; j++) {
            if(a[i] == a[j]) {
                flag = 1;
                printf("Duplicate found: %d\n", a[i]);
                break; // Stop checking further for this element
            }
        }
    }

    // If no duplicates found
    if(flag == 0) {
        printf("No duplicates found.\n");
    }

    return 0;
}
