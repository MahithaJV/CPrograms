# include <stdio.h>
int main(){
    char a[30];
    printf("enter string");
    scanf("%s",a);
    puts(a);
    for(int j=0;a[j]!='\0';j++){
        if(a[j]==105)
        a[j]=a[j]+6;
        else if(a[j]==117)
        a[j]=a[j]-20;
        else if(a[j]==101)
        a[j]=a[j]+4;
    }
    puts(a);

}