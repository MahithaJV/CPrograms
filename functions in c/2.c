# include <stdio.h>
void areacircle();
void areacircle(){
    int r;
    printf("enter radius:");
    scanf("%d",&r);
    printf("area is %f",(3.14*r*r));

}
int main(){
    areacircle();
    return 0;
}