# include <stdio.h>
void length(int (*a[])){
    int i,l=0;
    for(i=0;a[i]!=0;i++)
    l++;
    printf("%d",l);
}



int main(){
    int a[]={3,4,6,7,8};
    length(a);

    return 0;
}