# include <stdio.h>
int main()
{
int n;
printf("enter element");
scanf("%d",&n);
int i;
int r,rev=0;
for(i=n;i>0;i=i/10){
    r=i%10;
    rev=rev*10+r;
}
printf("reverse of number is %d",rev);
return 0;
}
    