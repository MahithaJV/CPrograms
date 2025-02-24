#include <stdio.h>

int main() {
    int a[6] = {1, 1, 6, 6, 6, 6};
    int i, j, isUnique;

    printf("Unique elements: ");
    for (i = 0; i < 6; i++) {
        isUnique = 1; // Assume the element is unique
        for (j = i+1; j < 6; j++) {
           if(a[i]==a[j])
           isunique=0;
           break;
            }
        }
        if (isUnique) {
            printf("%d ", a[i]);
        }
    }

    return 0;
}
