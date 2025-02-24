#include <stdio.h>
int main()
{
    int m[5];
    int i;
    for(i=0;i<5;i++){
        printf("enter value:",i);
        scanf("%d",&m[i]);

    }
    for(i=0;i<5;i++){
        printf("%d  ",m[i]);
    }
    for(i=0;i<5;i++){
        if((m[i])%2==0){
            printf("\n%d even",m[i] );
        }
            else 
            printf("\n%d odd ",m[i]);
        }
        return 0;
}