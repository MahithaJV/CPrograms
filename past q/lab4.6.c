# include <stdio.h>
int main(){
    int n;
    printf("enter value of n");
    scanf("%d",&n);
int i,c;
for(i=2;i<=n;i++){
    c=1;
    for(int j=2;j<n;j++){
        if(i%j==0)
        {
            c++;
        break;
        }
    }
    if(c>=1)
    break;
    else
    printf("prime no is %d\n",i);
}
return 0;
}