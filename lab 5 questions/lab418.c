#include <stdio.h>
int main()
{
    int m[5];
    for (int i = 0; i < 5; i++)
    {
        printf("enter m[%d]:",i+1);
        scanf("%d", &m[i]);
    }

    int j, k;
    for (int j = 0; j < 5; j++)
    {
        for (int k = 0; k < 5; k++)
        {
            if (m[j] - m[k] == 53)
            {
            }
            printf("pair is (%d   %d:\n)", m[k], m[j]);
        }

        
  }
          return 0;
  
}