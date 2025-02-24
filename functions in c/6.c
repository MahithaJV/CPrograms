# include <stdio.h>
int main(){
char a[30];
printf("enter name in string:");
scanf("%s",a);
puts(a);
int i,c;
for(i=0;a[i]!='\0';i++){
    c++;
}
printf("no of letters is %d",c);


    return 0;
}