# include <stdio.h>
int main(){
    char a[30];
    printf("enter string");
    scanf("%s",a);
    puts(a);
    int i;
    for(i=0;a[i]!='\0';i++){
        if(a[i]>=65 && a[i]<=90)
        a[i]+=32;
       
    }
    printf("new string is %c",a);
    puts(a);
    return 0;
}