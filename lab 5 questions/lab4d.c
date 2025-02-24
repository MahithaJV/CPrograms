#include<stdio.h>
int main(){
    int m[5]={9,5,1,4,3};
int i,j,tem;
for(i=1;i<5;i++){
tem=m[i];
j=i-1;
while(j>=0 && m[j]>tem){
    m[j+1]=m[j];
    j--;
}
m[j+1]=tem;
}
printf(" sorted array is \n");
for(i=4;i>=0;i--){
    printf("%d  ",m[i]);
}
printf("\n");
    return 0;
}