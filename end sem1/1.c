# include <stdio.h>
# include <string.h>
int main(){
    char a[30];
    printf("enter string");
    scanf("%s",a);
    int l=strlen(a);
    printf("%d\n",l);
    int start=0,end=l-1;
    int c=0;
    while(start<end){
        if(a[start]==a[end])
       { c++;
        printf("c is %d\n",c);}
        start++;
        end--;
    }
    if(c==(l/2))
    printf("palindrome");
    else
    printf("not a palindrome");
    return 0;

}