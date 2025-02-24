# include<stdio.h>
int main(){
    int a,b;
    printf("enter two integers ");
    scanf("%d %d",&a,&b);
    char sym;
    printf("enter sym");
    scanf(" %c",&sym);
    switch(sym){
        case '+':printf("sum is %d",a+b);
              break;
               case '-':printf("sub is %d",a-b);
              break;
              
             
              default:printf("in valid");
    }
return 0;
}