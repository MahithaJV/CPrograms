#include <stdio.h>
void check(char (*a),char *key){
    int i,j;
    for(i=0;(a[i])!=0;i++){
     if((a[i])==*key)
    { printf("key is found in %d",i);
     break;}
    
    }
    
}
int main(){
    char b[30];
    printf("enter string");
    scanf("%s",b);
    char key;
    printf("enter key");
    scanf(" %c",&key);
    check(b,&key);
    return 0;
}