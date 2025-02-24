#include <stdio.h>
int main()
{
    int m[2][2];
    int n[2][2];
    int i,j;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("value of m[%d][%d]:",i,j);
            scanf("%d",m[i][j]);
        }
    }
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d   ",m[i][j]);
        }
        printf("\n");
    }
        for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("value of n[%d][%d]:",i,j);
            scanf("%d",n[i][j]);
        }
    }
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d   ",n[i][j]);
        }
        printf("\n");
    }
    int c[2][2];
        for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            c[i][j]=m[i][j]+n[i][j];
        }
        }
        for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d  ",c[i][j]);
        }
        printf("\n");
        }
        return 0;
}


