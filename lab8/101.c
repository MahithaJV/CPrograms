# include <stdio.h>
void main(){
    int a[5]={1,4,5,6,0};
    int i,*j;
    j=a;
    for(i=0;i<6;i++){
          
        printf("adress is %d\n",*j);
        j++;
       
    }
}