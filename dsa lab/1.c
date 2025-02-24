# include <stdio.h>
int partition(int a[],int low,int high){
    int i,j,pivot,tem;
    i=low;
    j=high;
    pivot=a[high];
    while(i<j){
        while(a[i]>pivot)
        i++;
        if(i<j){
            tem=a[i];
            a[i]=a[j];
            a[j]=tem;
        }
        tem=a[high];
        a[high]=a[j];
        a[j]=tem;
    }
    return i;
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
        int n;

        printf("enter no of elements");
        scanf("%d",&n);
                int a[n];
        int i;
        for(i=0;i<n;i++){
            printf("enter element:");
            scanf("%d",&a[i]);
        }
        quicksort(a,0,n-1);
                for(i=0;i<n;i++){
            printf("%d    ",a[i]);
        }
return 0;
    
}