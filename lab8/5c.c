# include <stdio.h>
int main(){
    char a[30];
    printf("enter string:");
    scanf("%s",a);
    puts(a);
    int la=0,ld,ls;
    int i,j,k;
    for(i=0;a[i]!='\0';i++){
        if(a[i]>=65 && a[i]<=90)
        la++;
        else
        ld++;
    }
    printf("no of alphabets are :%d\n",la);
    printf("no of digits are :%d\n",ld);
    return 0;
}