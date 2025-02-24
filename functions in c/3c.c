#include <stdio.h>
void hellow(int n);


int main(){
    hellow(5);
    return 0;
}


void hellow(int n){
    if(n==0){
    return 0;
    }
    printf("hello world\n");
    hellow("n-1");
   
}
