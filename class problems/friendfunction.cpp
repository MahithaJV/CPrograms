# include <iostream>
using namespace std;
class complexnumber{
    private:
    int a,b;
    public:
    friend complexnumber add(complexnumber c1,complexnumber c2);
    void setvalue(int n1,int n2){
        a=n1;
        b=n2;
    }
    void getvalue(){
        cout <<"your num are"<<a<<","<<b<<endl;
    }
};
complexnumber add(complexnumber c1,complexnumber c2){
    complexnumber  c3;
    c3.a=c1.a+c2.a;
        c3.b=c1.b+c2.b;
    return c3;
}
int main(){
    complexnumber c1,c2,c3;
    c1.setvalue(2,3);
        c2.setvalue(2,3);
        c3=add(c1,c2);
        c1.getvalue();
         c2.getvalue();
          c3.getvalue();
        
    return 0;
    
}