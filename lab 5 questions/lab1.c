#include<stdio.h>
int main(){
    int m[8]={23,45,77,0,1,2,40,33};
    int i,key;
    printf("enter value of key");
    scanf("%d",&key);
    for(i=0;i<8;i++){
        if(m[i]==key){
        printf("%d is found in %d",key,i);
        break;

}

    }
}