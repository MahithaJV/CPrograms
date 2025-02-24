#include <stdio.h>
int main()
{
    int r, c, k;
    int m[10][10];
    printf("enter rows");
    scanf("%d", &r);
    printf("enter colums");
    scanf("%d", &c);
    int i, j;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("enter value m[%d][%d]:", i, j);
            scanf("%d", &m[i][j]);
        }
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d  ", m[i][j]);
        }
        printf("\n");
    }
    int rs[10] = {0};
    int cs[10] = {0};

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            rs[i] = rs[i] + m[i][j];
        }
        printf("sum of %d rs is %d\n", i, rs[i]);
    }

    for (i = 0; i < c; i++)
    {
        for (j = 0; j < r; j++)
        {
            cs[i] = cs[i] + m[j][i];
        }
        printf("sum of %d coloumn is %d\n", i, cs[i]);
    }

    return 0;
}