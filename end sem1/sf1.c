#include<stdio.h>
struct details{
    char name[10];
    int class;
    char section;
};
void print(char name[10],int *class,char *section){
printf("%s     %d      %c",name[10],*class,*section);
}

int main(){
    struct details s={"tharun",13,'a'};
    struct setails *p=&s;
    printf(s.name,&s.class,&s.section);
    return 0;
}