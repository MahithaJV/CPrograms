# include <stdio.h>
int main(){
    struct book{
        char name[10];
        float price;
        int pages;
    };
    struct book b1={"math",500.0,500};
    struct book b2;
    printf("enter details of book");
    scanf("%s %f %d",b2.name,&b2.price,&b2.pages);
    printf("\n b1   %s  %f  %d  ",b1.name,b1.price,b1.pages);
     printf("\n b2   %s  %f  %d  ",b2.name,b2.price,b2.pages);
    return 0;
}