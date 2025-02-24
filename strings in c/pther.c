#include <stdio.h>
int main(){
    char m[20]={"mahitha"};
    int n[20];
    int i=0;
    while(m[i]!='\0'){
        m[i]=n[i];
        i++;

    }
    n[i]='\0';
    puts(m);
    puts(n);
return 0;
}