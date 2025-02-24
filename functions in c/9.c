# include <stdio.h>
#include <string.h>
int main(){
    char a[30];
    printf("enter string:");
    scanf("%s",a);
    puts(a);
    int i,la,k;
    char tem[30];
for(k=0;a[k]!='\0';k++){
tem[k]=a[k];
}
    for(i=0;a[i]!='\0';i++){
        la++;
    }
    printf("length of the string is:%d \n",la);
    printf("the rev of the string is :");

    for(int j=la;j>=0;j--)
    {
       printf("%c",a[j]);
    }
    printf("\n");

    if(strcmp(tem,a)==0)
    printf("palindrome");
else
 printf("not palindrome");

    return 0;
}