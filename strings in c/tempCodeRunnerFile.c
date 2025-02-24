#include <stdio.h>
# include<string.h>
int main(){
    char a[30];
    printf("enter string");
    scanf("%s",a);
    int l=strlren(a);
    int i;
    for(i=l-1;i>=0;i++){
        printf("%c",a[i]);
    }
return 0;
}