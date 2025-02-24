# include <stdio.h>
int main(){
    char a[30];
    printf("enter string");
    scanf("%s",a);
    puts(a);
    int i;
    for(i=0;a[i]!='\0';i++){
        if(a[i]>=97 && a[i]<=122)
        a[i]=a[i]-32;
       
    }
   
    puts(a);
    return 0;
}