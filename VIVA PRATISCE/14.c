# include <stdio.h>
int check(int a[30],int *max){
for(int i=0;i<5;i++){
    printf("enter element");
    scanf("%d,&a[i]");
}
*max=a[0];

for(int i=0;i<5;i++){
if(a[i]>*max)
*max=a[i];

}
return *max;
}
int main(){
    int m;
    printf("enter value of m");
    scanf("%d",&m);
    
}