#include <stdio.h>
int r,c;
   printf("enter rows and columns");
   scanf("%d %d", &r , &c);
int m[10][10];
int n[10][10];
int i,j;
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        printf("enter m[%d][%d]",i,j);
        scanf("%d",&m[i][j]);
    }
}
    for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        n[c][r]=m[r][c];
}
for(i=0;i<c;i++){
    for(j=0;j<r;j++){
        printf("%d",n[c][r]);
    }
    printf("\n");
}
return 0;
}