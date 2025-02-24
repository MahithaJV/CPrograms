# include<stdio.h>
int main(){
    int a[10],i;
    for(i=0;i<5;i++){
        printf("enter element:");
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<5;i++){
        int flag=0;
        for(int j=i+1;j<5;j++){
            if(a[i]==a[j]){
            flag=1;
            printf("dulipate is %d \n",a[i]);
            break;
        }
        if(flag==0);
    }
}
    return 0;
}
