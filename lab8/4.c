# include <stdio.h>
# include <string.h>
int main(){
    char a[30];
    printf("enter string");
    scanf("%s",a);
    puts(a);
    char tem[30];
    for(int i=0;a[i]!='\0';i++){
        tem[i]=a[i];
    }
    int j;
    int l=strlen(a);
    
for(j=l;j>=0;j--){
    printf("%c",a[j]);
    
}
if(strcmp(tem,a)==0)
printf("    palindrome");
else
printf("not a palindrome");
return 0;
}