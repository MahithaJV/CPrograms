#include<stdio.h>
int main(){
    int m[8]={1,2,3,4,5,6,7,8};
    int key,mid;
printf("enter value of key");
scanf("%d",&key);
int l=0;
int h=8;
while(l<=h){
    mid=(l+h)/2;
    if(m[mid]==key){
    printf("%d is found",key);
    break;
    }
    else if(m[mid]>key)
    h=mid-1;
    else
    l=mid+1;
}

}
