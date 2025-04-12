# include<iostream>
using namespace std;
int main(){
    int x=5;
    int *p1,*p2;
    p1=&x;
    cout<<x<<endl;
    cout<<&x<<endl;
    cout<<p1<<endl;
    cout<<*p1<<endl;
   
    cout<<p1<<endl;
    *p1=10;
    cout<<p1<<endl;
    cout<<"x is:"<<x<<endl;
    p2=p1;
    cout<<p2<<endl;
    *p2=*p1;
    cout<<p2<<endl;
    cout<<*p2<<endl;
    int &b=x;
    cout<<"b:"<<b;

}