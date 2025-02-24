#include <stdio.h>

int main() {
   int a[30];
   int n;
   printf("enter no of ele");
   scanf("%d",&n);
   int i,j,tem;
   for(i=1;i<n;i++){
       tem=a[i];
       j=i-1;
       while(j>=0 && a[j]>tem){
           a[j+1]=a[j];
           j--;
       }
       a[j+1]=tem;
   }
   for(j=0;j<n;j++){
       printf("%d   ",a[j]);
   }
    return 0;
}