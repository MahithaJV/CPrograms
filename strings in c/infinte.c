#include <stdio.h>

int main() {
    // Write C code here
    printf("Try programiz.pro");
    char other;
    int n;
    char y,x;

    do{
        printf("enter value of n");
        scanf("%d",&n);
        printf("\n square is %d",n*n);
        printf("do u want to continue: y/x");
        scanf("%c",&other);
    }
    while(other==x);
    

    return 0;
}