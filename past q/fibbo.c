# include <stdio.h>
int main(){
    int f=0,s=1;
    int next,i,n;
    printf("enter num needed");
    scanf("%d",&n);
    printf("%d    ,%d    ",f,s);
    for(i=0;i<=n;i++){
        next=f+s;
        printf("%d    ",next);
        f=s;
        s=next;
    }
return 0;
}