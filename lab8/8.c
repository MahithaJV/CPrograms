#include <stdio.h>

int main() {
char a[30];
printf("enter string:");
scanf("%s",a);
puts(a);
int c,max=0;
char maxnum;
for(int i=0;a[i]!='\0';i++){
c=1;
for(int j=i+1;a[j]!='\0';j++){
if(a[j]==a[i]){
c++;
if(c>max)
maxnum=a[i];
}
}
}
printf("highest is %c",maxnum);


    return 0;
}