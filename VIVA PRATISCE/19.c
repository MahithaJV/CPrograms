#include <stdio.h>
void check(char *a,int *l){
    (*l)=0;
    printf("value is %d\n",*l);
    int i;
    for(i=0;a[i]!='\0';i++){
       ( *l)++;
    }
    
}
int main() {
    char b[30];
    printf("enter string");
    scanf("%s",b);
    int length;
    check(b,&length);
    printf("length of strimg is :%d",length);

    return 0;
}