
 #include <stdio.h>
struct point{
    int value;
    char exam[10];
};
int main(){
    struct point s={100,"cpcp"};
    struct point *p=&s;
printf("%u\n",p);
printf("%u\n",p+1);
printf("%d\n",(*p).value);
printf("%s\n",(*p).exam);
printf("%d\n",p->value);
printf("%s\n",p->exam);
return 0;
}