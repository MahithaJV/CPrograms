# include <stdio.h>
# include <string.h>
int main(){
char a[30];
printf("enter string");
scanf("%s",a);
int i,l;
l=strlen(a);
char tem[30];
for(i=0;i<l;i++){
tem[i]=a[i];
}
puts(tem);
for(i=l-1;i>=0;i--){
    printf("%c",a[i]);
}
puts(a);
if(strcmp(tem,a)==0)
printf("palindrome");
else
printf("not a palindrome");
return 0;
}
