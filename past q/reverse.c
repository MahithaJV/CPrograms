# include <stdio.h>
int main(){
    int n;
    printf("enter value of n");
    scanf("%d",&n);
    int i,r,rev=0;
    for(i=n;i>0;i=i/10){
         r=i%10;
         rev=rev*10+r;
    }
    printf("rev is %d",rev);
    return 0;
}