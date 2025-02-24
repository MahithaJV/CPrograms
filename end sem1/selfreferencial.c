# include <stdio.h>
struct node {
    int data1;
    int data2;
    struct node *link;
};
int main(){
    struct node ob1;
    ob1.link=NULL;
    ob1.data1=30;
    ob1.data2=40;
    struct node ob2;
    ob2.link=NULL;
    ob2.data1=10;
    ob2.data2=20;
    ob1.link=&ob2;
    printf("%d     %d   ",ob1.link->data1,ob1.link->data2);
    return 0;

}