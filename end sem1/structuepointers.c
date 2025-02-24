# include<stdio.h>
struct details{
    char name[10];
    int class;
    char section;
};
int main(){
    struct details s;
    printf("enter name");
    scanf("%s",s.name);
    printf("enter class");
    scanf("%d",&s.class);
    printf("enter section");
    scanf(" %c",&s.section);
    struct details *p=&s;
    printf("%s      %d        %c",p->name,p->class,p->section);
    return 0;

}