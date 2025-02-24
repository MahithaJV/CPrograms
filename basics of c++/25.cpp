# include <iostream>
# include <string>
using namespace std;
    int sum(int *x,int *y){
        return *x+*y;
    }
int main(){
   int a,b;
   cout <<"enter a";
   cin >> a;
   cout <<"enter b";
   cin >> b;
   int r=sum(&a,&b);
   cout <<"sum is "<<" "<< r <<endl;
return 0;
}