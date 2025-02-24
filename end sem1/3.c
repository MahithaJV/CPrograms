# include <stdio.h>
# include <stdlib.h>
int main(){
    int *height;
    int i,n;
    printf("num of num");
    scanf("%d",&n);

    height=(int *)malloc(n*sizeof(int));
        if(height==NULL)
printf("canot allocate");
    for(i=0;i<n;i++){
        printf("enter height of studemt");
        scanf("%d",&height[i]);
    }
    int sum=0;
    for(i=0;i<n;i++){
        sum+=height[i];
    }
    int a=sum;

    printf("sum is %d",a);
    free(height);
    return 0;
}
