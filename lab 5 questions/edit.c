#include <stdio.h>

int main()
{
    int m[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter m[%d]:", i+1);
        scanf("%d", &m[i]);
    }

    int j, k;
    for (j = 0; j < 5; j++)
    {
        for (k = 0; k < 5; k++)
        {
            if (m[j] - m[k] == 53)
            {
                printf("Pair is (%d, %d)\n", m[k], m[j]);
            }
        }
    }

    return 0;
}
