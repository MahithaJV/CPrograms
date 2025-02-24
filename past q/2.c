# include <stdio.h>
# include <math.h>
int pow(int n,int base){
    if(n==0)
    return 1;
    else 
    return(pow(base,n-1));
}
void main(){
    int base,n;
    printf("enter base and exponent");
    scanf("%d %d ",&base,&n);
    int r=pow(n,base);
    printf("%d",r);
}