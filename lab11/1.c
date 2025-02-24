#include <stdio.h>
struct student{
    char name[30];
    int mis;
    char coruse[20];
    int year;
};
int main(){
    struct student details[5];
    int i;
    for(i=0;i<5;i++){
        printf("name,mis,corse,year");
        scanf("%s     %d      %s      %d     ",details[i].name,&details[i].mis,details[i].coruse,&details[i].year);
    }
        for(i=0;i<5;i++){
            printf("\n %s     %d     %s     %d     ",details[i].name,details[i].mis,details[i].coruse,details[i].year);
        }
        return 0;
}
