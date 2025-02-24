//passing array into a function
# include <iostream>
# include <string>
using namespace std;
int sum(int a[5]){
    int i,sum=0;
    for(i=0;i<5;i++){
        cout <<a[i]<<endl;
    }
        for(i=0;i<5;i++){
       sum=sum+a[i];
    }
return sum;
}
int main(){
    int a[5];
    int i;
    for(i=0;i<5;i++){
        cout <<"enter element";
        cin >> a[i];
    }
   
     int r=sum(a);
     
    cout <<"sum is "<<" "<<r<<endl;
    return 0;

}