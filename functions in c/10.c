#include <stdio.h>
void check(){
    int a,i;
    for(a=20;a<=200;a++){
        int c=0;
        for(i=2;i<a;i++){
            if(a%i==0)
            c++;
        }
            if(c>=1)
            continue;
            else
            printf("%d is prime number\n",a);
        
    }
}
int main(){
    check();
    return 0;
}