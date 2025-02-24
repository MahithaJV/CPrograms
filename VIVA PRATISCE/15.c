# include <stdio.h>
int main(){ 
int a[4][4],b[4][4];
int i,j;
for(i=0;i<2;i++){
    for(j=0;j<3;j++){
        printf("enter a[%d][%d]:",i,j);
        scanf("%d",&a[i][j]);

    }
}
for(i=0;i<3;i++){
    for(j=0;j<2;j++){
        printf("enter b[%d][%d]:",i,j);
        scanf("%d",&b[i][j]);
        
    }
}
int k,c[4][4];
for(i=0;i<2;i++){
    for(j=0;j<2;j++){
        for(k=0;k<3;k++){
            c[i][j]=a[i][k]*b[k][j];
        }
    }
}
for(i=0;i<2;i++){
    for(j=0;j<2;j++){
         printf("%d   ",c[i][j]);
    }
    printf("\n");
}
return 1;
        

}