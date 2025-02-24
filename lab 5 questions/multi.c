#include <stdio.h>

int main() {
    int r, c;
    
    // Input the number of rows and columns
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &r, &c);

    int m[10][10];  // Original matrix
    int n[10][10];  // Transposed matrix
    int i, j;

    // Input matrix elements
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("Enter element m[%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }

    // Transpose the matrix
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            n[j][i] = m[i][j];  // Swapping row and column indexes
        }
    }

    // Display the transposed matrix
    printf("The transposed matrix is:\n");
    for (i = 0; i < c; i++) {
        for (j = 0; j < r; j++) {
            printf("%d ", n[i][j]);
        }
        printf("\n");
    }

    return 0;
}

