#include <stdio.h>

void check(int a){
    int p=0;
   for(int i=a;i>=1;i=i/10){
      int r=i%10;
       p=p+(r*r*r);
   }
   if(a==p)
   printf("it is armstrong num");
   else
   printf("not a armstrong num");

}
int main(){
    int m;
    printf("value of m");
    scanf("%d",&m);
    check(m);
    return 0;
}