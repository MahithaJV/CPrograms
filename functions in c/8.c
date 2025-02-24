#include <stdio.h>

int caltax(int in){
    if(in>5000)
    return 1000;
    else if(in>10000)
    return 2000;
    else
    return 3000;
}
void bigcal(){
    int p,f;
    printf("income of the person is is:%d",p);
    printf("tax amt of person is :%d",f);
}

int main(){
   int p,f;
    printf("enter income is :");
    scanf("%d",&p);
     f=caltax(p);
    bigcal();
    
}
