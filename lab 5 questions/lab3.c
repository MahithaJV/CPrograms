#include<stdio.h>
int main(){
    int m[8]={8,7,6,5,4,3,2,1};
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
