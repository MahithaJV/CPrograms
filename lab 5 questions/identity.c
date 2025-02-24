#include <stdio.h>
int main(){
    int m[10][10];
    int r,c;
    printf("enter num of rows");
    scanf("%d",&r);
        printf("enter num of col");
    scanf("%d",&c);
    int i,j;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("enter value of m[%d][%d]:",i,j);
            scanf("%d",&m[i][j]);
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d  ",m[i][j]);
        }
        printf("\n");
    }
    int min,tem;

    m[0][0]=min;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(m[i][j]<min){
tem=m[i][j];
m[i][j]=min;
min=tem;
            }
        }
    }
    printf("%d is min \n",min);

            return 0;
}