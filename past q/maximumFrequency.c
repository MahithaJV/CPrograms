// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    int a[6] = {1, 1, 1, 1, 6, 6};
    int i, j, c, max = 0, me;
    for (i = 0; i < 6; i++)
    {
        c = 0;
        for (j = i + 1; j < 6; j++)
        {
            if (a[i] == a[j])
            {
                c++;
            }
            if (c > max)
            {
                max = c;
                me = a[i];
            }
        }
    }
    printf("max repeated is %d", me);

    return 0;
}