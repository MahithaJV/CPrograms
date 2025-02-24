# include <stdio.h>
int main(){
    int a[10][10];
    int r,c;
    printf("enter rowsa nd coiums");
    scanf("%d %d ",&r,&c);
    int i,j;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("enter a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d  ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("\n");
    printf("\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d  ",a[j][i]);
        }
        printf("\n");
    }
    return 0;
}