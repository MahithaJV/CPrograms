# include <stdio.h>
# include <string.h>
int main(){
    int n,i,j;
    printf("no of strings");
    scanf("%d",&n);
    char a[n][100];
    for(i=0;i<n;i++){
      printf("enter string");
      scanf("%s",a[i]);
    }
    char tem[100];
    //bubble sorting
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(strcmp(a[j],a[j+1])>0){
                strcpy(tem,a[j]);
                strcpy(a[j],a[j+1]);
                strcpy(a[j+1],tem);
            }
        }
    }
    //ascending order
    for(i=0;i<n;i++){
        printf("%s\n",a[i]);
    }
    return 0;
}