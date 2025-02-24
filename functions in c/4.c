#include<stdio.h>
int sum(int n);

int main(){
    printf("sum is %d",sum(23));
    return 0;
}




int sum(int n){
    if(n==0)
    return 0;
    int sumn=sum(n-1);
int sumN=sumn+n;
return sumN;

}