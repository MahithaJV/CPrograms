# include <stdio.h>
int main(){
    char a[30];
    char b[30];
    printf("enter string");
    scanf("%s",a);
    puts(a);
    int i,la;
    for(i=0;a[i]!='\0';i++){
la++;
    }
    printf("length of string :%d",la);
    int j;
    for(j=la;j>=0;j--){
        b[j]=a[j];
printf("%c",b[j]);
    }
    
    return 0;
}