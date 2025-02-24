# include<iostream>
using namespace std;
class complex{
    private:
    int a,b;
    public:
    friend complex add(complex c1,complex c2);
    
    void setvalue(int x,int y){
        a=x;
        b=y;
    }

    //getter
    void getvalue(){
        cout<<"a is"<<a<<"b is"<<b<<endl;
    }
    
};
//freind shipship
complex add(complex c1,complex c2){
    complex c3;
         c3.a=c1.a+c2.a;
        c3.b=c1.b+c2.b;
        return c3;
}
int main(){
    complex c1,c2;
    c1.setvalue(3,3);
     c2.setvalue(3,3);
    complex c3;
    c1.getvalue();
    c2.getvalue();
    c3=add(c1,c2);
    c3.getvalue();
    return 0;
    
    
}