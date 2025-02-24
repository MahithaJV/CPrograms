#include <stdio.h>

int main()
{
    int i, j;
    for (i = 4; i > 0; i--)
    {
        for (j = 0; j <= i - 1; j++)
        {
            printf("   ");
        }
        for (j = 0; j < 5 - i; j++)
        {
            printf(" *    ");
        }
        printf("\n");
    }
    return 0;
}
