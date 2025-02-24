# include <iostream>
# include <string>
using namespace std;
class student{
    public:
    int mis;
    string name;
    char section;
    string dept;
    //parametersed constructor
    student(int a,string b,char c,string d){
        cout <<"hello guys\n";
        mis=a;
        name=b;
        section=c;
        dept=d;
    }
    void print(){
        cout<<"details are"<<mis<<"  "<<name<<"  "<<section<<"  "<<dept<<endl;
    }
};
int main(){
    student s1={121,"mahi",'c',"ece"};
    s1.print();
        student s2={12113212,"mahdfci",'c',"ecface"};
    s2.print();
    return 0;
}