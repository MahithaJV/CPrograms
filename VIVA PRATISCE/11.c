# include <stdio.h>
int main(){
    int a[20];
    for(int i=0;i<4;i++){
        printf("enter element");
        scanf("%d",&a[i]);
      

    }
    for(int i=0;i<4;i++){
printf("%d    ",a[i]);
    }
    printf("\n");
    printf("\n");
    printf("\n");
    int i,j;
    for(i=0;i<4;i++){
        for(j=i+1;j<4;j++){
            if(a[i]==a[j])
                    continue;
                    else
                    {printf("%d   ",a[i]);
                    break;}
        }
    }
    return 0;
}