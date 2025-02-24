#include <stdio.h>
int main()
{
    int sum=0;
    int n;
    for (int i = 0; i <4; i++){
printf("enter value of n",i);
scanf("%d",&n);
if(n<0)
break;
else{
    sum=sum+n;
}
printf("su  is %d",sum);
    }
    return 0;
}