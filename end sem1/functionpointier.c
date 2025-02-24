# include <stdio.h>
void print(int a){
    printf("a is %d",a);
}
int main(){
    void (*p)(int)=&print;
    (*p)(1000);
     return 0;
}