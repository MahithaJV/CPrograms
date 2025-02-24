// Online C++ compiler to run C++ program online
#include <iostream>
# include <string>
using namespace std;
int sum(int &a,int &b){
    a=a+2;
    b=b-2;
    return 0;
}

int main() {
 int x,y;
 cout <<"enter value of x";
 cin >> x;
 cout <<"enter value of y";
 cin >> y;
 cout <<"before"<<endl;
 cout <<x<<endl;
  cout <<y<<endl;
  int r=sum(x,y);
   cout <<x<<endl;
  cout <<y<<endl;
 
    return 0;
}