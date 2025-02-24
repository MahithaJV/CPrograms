# include <stdio.h>
# include<time.h>
//merge
void mergesort(int a[],int low,int mid,int high){
    int i,j,k,b[20],r;
    i=low;
    j=mid+1;
    k=low;
    while(i<=mid && j<=high){
        if(a[i]<a[j]){
            b[k]=a[i];
            i++;
        }
        else{
            b[k]=a[j];
            j++;
           }
           k++;
    }
    if(i<mid){
        for(r=i;r<=mid;r++){
            b[k]=a[r];
            k++;
        }
    }
    else{
        for(r=j;r<=high;r++){
            b[k]=a[r];
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
int main(){
    int a[5];
    for(int i=0;i<5;i++){
        printf("enter element");
        scanf("%d",&a[i]);
    }
    clock_t start,end;
    double time_taken;
   start= clock ();
    merge(a,0,5);
   end= clock ();

    //to print array
    for(int i=0;i<5;i++){
        printf("%d     ",a[i]);
    }
    printf("time taken is:\n");
    time_taken=(double)((end-start)/CLOCKS_PER_SEC);
    printf("%f",time_taken);
    return 0;
}
