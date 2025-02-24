# include <iostream>
using namespace std;
class complexnumber{
    private:
    int realpart;
    int imaginarypart;
    public:

    //setter
    void setvalue(int real,int img){
        realpart=real;
        imaginarypart=img;
    }
    //getter
    void showvalue(){
        cout<<realpart<<"+"<<"i"<<imaginarypart<<endl;
        //member function
        // void getvalue();
    }

    complexnumber add(complexnumber c1,complexnumber c2);
};
complexnumber complexnumber :: add(complexnumber c1,complexnumber c2){
    complexnumber c3;
    c3.realpart=c1.realpart+c2.realpart;
    c3.imaginarypart=c1.imaginarypart+c2.imaginarypart;
    return c3;
}
int main(){
    complexnumber c1,c2,c3;
        c1.setvalue(4,3);
    c1.showvalue();
        c2.setvalue(2,5);
    c2.showvalue();
    c2=c2.add(c1,c2); 
     c2.showvalue();
return 0;
}