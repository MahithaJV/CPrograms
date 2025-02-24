# include <stdio.h>
# include <string.h>
void check(){
    char a[100],b[100];
printf("enter string");
scanf("%s",a);
printf("enter string");
scanf("%s",b);
int l=strlen(b);
for(int i=0;a[i]!='\0';i++){
    b[l+i]=a[i];
}
puts(b);
int k,j,c;
for( j=0;b[j]!='\0';j++){# include <stdio.h>
# include <string.h>
void check(){
    char a[100],b[100];
printf("enter string");
scanf("%s",a);
printf("enter string");
scanf("%s",b);
int l=strlen(b);
for(int i=0;a[i]!='\0';i++){
    b[l+i]=a[i];
}
puts(b);
int k,j,c;
for( j=0;b[j]!='\0';j++){
    for( k=j+1;b[k]!='\0';k++){
if(b[j]==b[k])
break;
else
{
    
    printf("unique elements are %c  \n ",&b[j]);
break;
}
    }


}
}
