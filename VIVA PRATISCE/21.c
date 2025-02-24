# include <stdio.h>
void sort(int (*a),int (*n)){
    int i,j,tem;
    for(i=0;i<(*n)-1;i++){
         for(j=0;j<(*n)-i-1;j++){
             if(a[j]>a[j+1]){
                tem=a[j];
                a[j]=a[j+1];
                a[j+1]=tem;
             }
         }
    }
    for(i=0;i<(*n);i++)
    printf("%d     ",a[i]);
}
int main(){
    int b[30];
    int i,n;
    printf("enter n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("enter element");
        scanf("%d",&b[i]);
    }
    sort(b,&n);
    return 0;

}