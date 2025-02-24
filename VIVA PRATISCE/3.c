#include <stdio.h>

int main() {
   int a,d,n;
   float sum=0;
  printf("enter frist term");
  scanf("%d",&a);
    printf("enter difference");
  scanf("%d",&d);
  printf("enter  term");
  scanf("%d",&n);
  for(int i=1;i<=n;i++){
        int t=a+((i-1)*d);
      printf("%f  ",1/t);
      sum+=1/t;

  }
  printf("sum is %f",sum);
    return 0;
}