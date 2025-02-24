# include <stdio.h>
# include <string.h>
int main(){
    char a[30];
    printf("enter value of string");
    scanf("%s",a);
    puts(a);
    int l=strlen(a);
    printf("size is %d",l);
char b;
printf("enter a char to find:");
scanf(" %c",&b);
int i;
    for(i=l-1;i>=0;i--){
        if(b==a[i])
      {  printf("%c is found in %d",b,i);
      }
        else
        continue;
    }
return 0;
}