# include <stdio.h>
int main(){
    char a[30];
    printf("enter the string:");
    scanf("%s",a);
    puts(a);
    int i,la=0;
    for(i=0;a[i]!=0;i++){
la++;
    }
    printf("length of the string is :%d",la);
    char b[30];
    printf("enter the string:");
    scanf("%s",b);
    puts(b);
    int j;
    for(j=0;b[j]!=0;j++){
        a[la+j]=b[j];
    }
    puts(a);
    return 0;
}