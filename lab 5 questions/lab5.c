#include <stdio.h>

int main() {
    
int a[2][2];
for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        printf("enter element a[i][j]:\n");
        scanf("%d",&a[i][j]);
    }
}
for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        printf("%d",a[i][j]);
    }
    printf("\n");
}
int b[2][2];
for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        printf("enter element b[i][j]:\n");
        scanf("%d",&b[i][j]);
    }
}
for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        printf("%d",b[i][j]);
    }
    printf("\n");
}
int c[2][2];

for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
                c[i][j]=a[i][j]+b[i][j];

        printf("%d",c[i][j]);

    }
    printf("\n");
}

    return 0;
}
