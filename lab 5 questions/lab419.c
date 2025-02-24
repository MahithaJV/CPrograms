#include <stdio.h>
int main(){
    int m[10][10];
    int tem;
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
    int k,l;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
for(k=0;k<4;k++){
        for(l=0;l<4-i;l++){
            if(m[l]>m[l+1]){
                tem=m[l];
                m[l]=m[l+1];
                m[l+1]=tem;
            }
        }
}
for(i=0;i<r;i++){
        for(j=0;j<c;j++){
printf("%d",m[i][j]);

            }
            printf("\n");
}
return 0;
        }