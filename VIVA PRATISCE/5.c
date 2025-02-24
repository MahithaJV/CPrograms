#include <stdio.h>
int main()
{
    int a[5];
    int i, j;
    for (i = 0; i < 4; i++)
    {
        printf("enter num in array");
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 4; i++)
    {
        for (j = i + 1; j < 4; j++)
        {
            if (a[i] == a[j])
            {
                continue;
            }
            else
                printf("%d  ", a[i]);
        }
    }
    return 0;
}