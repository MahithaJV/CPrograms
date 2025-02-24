#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    int count=0;
    puts("enter string:");
    gets(a);
    puts(a);

while(a[count]!='\0'){
    if(a[count]>=65 && a[count]<=90){
        a[count]= a[count]+32;
    }
    else
     a[count]= a[count]-32;
     count++;
}
puts(a);
return 0;
}