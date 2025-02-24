#include <stdio.h>
void check(){
    int m[5];
    int i;
    for(i=0;i<5;i++){
        printf("enter num");
        scanf("%d",&m[i]);
    }
    int k,j;
    for(k=0;k<5;k++){
        for(j=0;j<4;j++){
            if(m[j]>m[j+1]){
                int tem;
                tem=m[j];
                m[j]=m[j+1];
                m[j+1]=tem;
            }
        }
    }
    for(int i=0;i<5;i++){
        printf("%d  ",m[i]);
    }
    printf("\n");
    int a=m[0];
    int b=m[4];
    int c=m[3];
    printf("max diff is %d",b-a);
    printf("min diff is %d",b-c);
}
int main(){
    check();
    return 0;
}
