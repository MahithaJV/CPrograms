# include <stdio.h>
int print(int a,int b){
    printf("sum is %d",a+b);
}
int main(){
    void (*p)(int,int)=&print;
    int m,n;
    printf("enter two numbers");
    scanf("%d %d",&m,&n);
    (*p)(m,n);
     return 0;
}