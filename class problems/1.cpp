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
    }
        //member function
        void getvalue();
    
};
    void complexnumber::getvalue(){
        cout <<"enter real part";
        cin>>realpart;
        cout <<"enter img part";
        cin >>imaginarypart;
    }
int main(){
    complexnumber c1,c2,c3;
    c1.setvalue(4,3);
    c1.showvalue();
        c2.setvalue(2,5);
    c2.showvalue();
    c3.getvalue();
    c3.showvalue();

    return 0;
}





