# include <stdio.h>
void printtable();
void printtable(){
    int n;
    printf("enter value of n");
    scanf("%d",&n);
    int i;
    for(i=1;i<11;i++){
        printf("%d\n",(n*i));
    }
}
int main(){
    printtable();
    return 0;
}
