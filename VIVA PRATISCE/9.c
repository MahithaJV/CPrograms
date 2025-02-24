# include <stdio.h>

int main() {
 int a[30];
 int i,n;
 printf("enter value of n");
 scanf("%d",&n);
 int p;
 printf("num of rotations");
 scanf("%d",&p);
 char d;
 
 for(i=0;i<n;i++){
     printf("enter element");
     scanf("%d",&a[i]);
 }
 int tem;
 printf("directiion");
 scanf(" %c",&d);
 switch(d){
     case 'l': for(int k=0;k<p;k++){
               tem=a[0];
              for(i=0;i<n;i++)
              a[i]=a[i+1];
              a[n-1]=tem;
     }
           break;   
 }
  for(i=0;i<n;i++){
     printf("%d   ",a[i]);
  }
    return 0;
}