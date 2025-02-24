#include <stdio.h>
int main(){
    char m[20]={"mahitha"};
    scanf("%s",m);
    printf("\n%s",m);
    int c=0;
    for(int i=0;m[i]!=0;i++){
printf("%c\n",m[i]);
c++;
    }
    printf("%d\n",c);
    return 0;
}