#include <stdio.h>
int main(){
    char a[30];
    char b[30];
    printf("enter string of a");
    scanf("%s",a);
    puts(a);
 int la=0;
   for(int i=0;a[i]!=0;i++){
       la++;
   }
   printf("length is %d\n",la);

printf("enter string of b");
    scanf("%s",b);
    puts(b);

    int i,f=0;
    for(i=0;a[i]!='\0';i++){
        if(a[i]==b[i])
       f++;
        }
        printf("f is %d\n",f);
        if(f==la)
        printf("\ntwo strings are equal");
        else
         printf("\ntwo strings are not equal");

    return 0;
}