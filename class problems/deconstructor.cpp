# include<iostream>
using namespace std;
class A{
    public:
    A(){
        cout<<"constuctor is called\n";
    }
    ~A(){
        cout<<"destuuctor is called\n";
    }

};
int main(){
 A a;
  a.~A();
  return 0;   
}