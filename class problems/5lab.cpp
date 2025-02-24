# include <iostream>
using namespace std;
class operation{
    private:
    int num;
    public:
    //setter
    void setvalue(int a){
        num=a;
    }
    //getter
    void getvalue(){
        cout <<"num is:"<<num<<endl;
    }
    //default constructor
    operation(){
        num=5;
    }
    //function declaration to add
    int add(operation o1,operation o2){
        operation o3;
        o3.num=o1.num+o2.num;
        return o3.num;
    }
};
int main(){
    operation o1,o2,o3;
    o2.setvalue(6);
    o1.getvalue();
    o2.getvalue();
    int r=o3.add(o1,o2);
    cout <<r<<endl;
    return 0;

}
