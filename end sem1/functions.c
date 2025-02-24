#include <stdio.h>
 struct student {
    char name[19];
    int class;
};
int main() {
struct student detail;
printf("enter name and class");
scanf("%s %d",detail.name,&detail.class);
printf("%s      %d",detail.name,detail.class);
    return 0;
}