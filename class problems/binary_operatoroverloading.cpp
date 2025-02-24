# include<iostream>
using namespace std;
class complex{
    int real,imaginary;
    public:
    complex operator+(complex c);
    complex(){
        real=0;
        imaginary=0;
    }
    complex(int a,int b){
        real=a;
        imaginary=b;
    }
    void showvalue(){
        cout<<"complex num is "<<real<<"+i"<<imaginary<<endl;

    }

};
complex  complex ::operator +(complex c){
    complex c3;
    c3.real=real+c.real;
    c3.imaginary=imaginary+c.imaginary;
    return c3;
}
int main(){
    complex c1(2,3),c2(3,2),c3,c4(2,2);
    c3=c1+c2+c4;
    c1.showvalue();
    c2.showvalue();
    c3.showvalue();

return 0;
    
}


