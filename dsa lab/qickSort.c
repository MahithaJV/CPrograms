# include<stdio.h>
int partition(int a[],int low,int high){
    int i,j,pivot,tem;
    pivot=a[low];
    i=low;
    j=high;
    while(i<j){
        while(a[i]<=pivot)
        i++;
        while(a[j]>pivot)
        j--;
    if(i<j){
        tem=a[i];
        a[i]=a[j];
        a[j]=tem;
    }
    tem=a[low];
    a[low]=a[j];
    a[j]=tem;
    return i;
}
}
void quicksort(int a[],int low,int high){
    int p;
    if(low<high){
        p=partition(a,low,high);
        quicksort(a,low,p-1);
        quicksort(a,p+1,high);
    }
}
int main(){
    int i,n,a[n];
    printf("enter no of elements");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("enter element");
        scanf("%d",&a[i]);
    }
    quicksort(a,0,n-1);
    for(i=0;i<n;i++){
        printf("%d   ",a[i]);
    }
    return 0;
    }