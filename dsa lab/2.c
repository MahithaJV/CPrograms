# include<stdio.h>
int main(){
    char a[30];
    printf("enter string");
    gets(a);
    int i,c=0;
    for(i=0;a[i]!='\0';i++){
        c++;
    }
    for(i=(c);i>=0;i--){
        printf("%c",a[i]);
        
    }
    return 0;
}