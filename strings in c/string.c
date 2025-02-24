#include <stdio.h>
#include <string.h>
int main(){
char m[20]={"mahitha"};
char n[20];
puts(m);
int l;
l=strlen(m);
printf("string is :%s  length is %d",m,l);
strcpy(n,m);
printf("%s\n",n);
char o[20]={"hello!"};
strcat(o,n);
puts(o);
puts(n);
return 0;
}