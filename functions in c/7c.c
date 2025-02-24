# include <stdio.h>
float area(int r){
    float A=3.14*r*r;
    return A;
}
int main(){
    int m;
    printf("enter radius:");
    scanf("%d",&m);
    float  n=area(m);
    printf("area is: %f\n",n);

}