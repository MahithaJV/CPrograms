# include<stdio.h>
#include<time.h>
# include<stdlib.h>
//merge code
void mergesort(int a[],int low,int mid,int high){
    int i,j,k,b[high-low+1],r;
    i=low;
    j=mid+1;
    k=low;
    while(i<=mid && j<=high){
        if(a[i]<a[j]){
            b[high-low+1]=a[i];
            i++;
        }
        else{
            b[high-low+1]=a[j];
            j++;
           }
           k++;
    }
    if(i<mid){
        for(r=i;r<=mid;r++){
            b[high-low+1]=a[r];
            k++;
        }
    }
    else{
        for(r=j;r<=high;r++){
            b[high-low+1]=a[r];
            k++;
        }
    }
}
void merge(int a[],int low,int high){
    int mid;
    if(low<high){
        mid=(low+high)/2;
        merge(a,low,mid);
        merge(a,mid+1,high);
        mergesort(a,low,mid,high);
        
    }
}
//main code
int main(){
    int n;
    printf("enter no of elements");
    scanf("%d",&n);
    int a[n];
    int i;
    for(i=0;i<n;i++){
        a[i]=rand();
    }
    clock_t start=clock();
    double time_taken;
    merge(a,0,n);
    clock_t end=clock();
    time_taken=(double)(end-start)/CLOCKS_PER_SEC;
    printf("time taken is %f",time_taken);
    return 0;;
}