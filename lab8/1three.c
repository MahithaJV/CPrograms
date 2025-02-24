# include <stdio.h>
int main(){
    char a[30];
    printf("enter string:");
    scanf("%s",a);
    puts(a);
    char b[30];
    int i;
    for(i=0;a[i]!=0;i++){
        b[i]=a[i];
    }
puts(b);
return 0;
}