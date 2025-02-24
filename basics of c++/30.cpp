//class and objects code
# include <iostream>
# include <string>
using namespace std;
class teacher{
    private:
    double salary;
    public:
    string name;
    string dept;
    string subject;
    teacher(){
        cout <<"good techer"<<endl;
    }
    //setter
    void setsalary(double s){
    salary=s;
    }
    //geter
    double getsalary(){
        return salary;
    }

};
int main(){
    teacher t1;
    teacher t2;
        cout <<"enter name";
        cin >>t1.name;
        cout <<"enter dept";
        cin >>t1.dept;
        cout <<"enter subject";
        cin >>t1.subject;
        cout <<"name is :"<<t1.name<<"  "<<"dept is:"<<t1.dept<<"   "<<"subject is:"<< " " <<t1.subject<<endl;
        t1.setsalary(100000000);
        cout <<"salary is :"<<t1.getsalary()<<endl;

           return 0;

}
