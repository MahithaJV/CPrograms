#include<stdio.h>
#include <math.h>
void areacircle();
void triangle();
void rectangle();
void areacircle(){
    int r;
printf("enter radius:");
scanf("%d",r);
printf("area is %f",pow(r,2));
}
void triangle(){
    int s1,s2,s3;
    printf("enter side 1:");
    scanf("%d",s1);
    printf("enter side 2:");
    scanf("%d",s2);
    printf("enter side 3:");
    scanf("%d",s3);
    printf("perimeter is %d",s1+s2+s3);
    if(s1==s2 && s2==s3)
    printf("equilatral triangle");
    else if((s1==s2 && s2!=s3)||(s1==s3 && s1!=s2)||(s3==s2 && s2!=s1))
    printf("isolecles triangle");
    else
    printf("scalence triangle");
}
void rectangle(){
    int s1,s2;
        printf("enter side 1:");
    scanf("%d",s1);
    printf("enter side 2:");
    scanf("%d",s2);
    printf("perimeter is %d",s1+s2);
    if(s1==s2)
    printf("square");
    else
    printf("rectangle");

}
int main(){
 rectangle();
 areacircle();
 triangle();
}