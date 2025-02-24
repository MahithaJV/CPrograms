#include<stdio.h>
int main(){
    int m[5]={22,3,45,200,99};
    int i,j;
    int tem;
    for(i=0;i<5;i++){
        for(j=0;j<5-i;j++){
            if(m[j]>m[j+1]){
                tem=m[j];
                m[j]=m[j+1];
                m[j+1]=tem;
            }

        }
    }
    printf("sorted array is \n");
    for(i=0;i<5;i++){
        printf("%d  ",m[i]);
    }
    printf("\n");
    return 0;
}