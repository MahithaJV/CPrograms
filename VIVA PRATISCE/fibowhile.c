# include <stdio.h>
int main(){
    int n;
    printf("enter value of n");
    scanf("%d",&n);
    int count=0;
    int frist=0,second=1,next;
    printf("%d   %d  ",frist,second);
    while(count<=n){
        next=frist+second;
        frist=second;
        second=next;
        printf("%d    ",next);
        count++;

    }
    return 0;
}