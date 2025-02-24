#include <stdio.h>
int main()
{
int m[10];
for(int i=0;i<11;i++){
    printf("enter number",i+1);
    scanf("%d",&m[i]);
}
for(int i=0;i<11;i++){
    if(m[i]%2==0){
        printf("%d/n",m[i]);
    }
    else{
        printf("%d",m[i]);
    }
}

return 0;


}