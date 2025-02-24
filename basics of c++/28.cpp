// Online C++ compiler to run C++ program online
#include <iostream>
# include <string>
using namespace std;
void result(int &x,int &y){
    int z;
   z=x;
   x=y;
   y=z;
}
int main(){
    int a,b;
    cout <<"enter frist num";
    cin >> a;
    cout <<"enter second num";
    cin >> b;
    cout <<"before"<<endl;
    cout <<"a is "<<a<< " "<< "b is " <<"  "<<b<<endl;
    result(a,b);
        cout <<"after"<<endl;
    cout <<"a is "<<a<< " "<< "b is " <<"  "<<b<<endl;
    return 0;
    
}