# include <iostream>
# include <string>
using namespace std;
class teacher{
    public:
    //properties
    string name;
    string dept;
    int num;
    int salary;
    //methods
    void changedept(string newstring){
        dept=newstring;
    }
};
int main(){
    teacher t1;
    t1.name="mahitha";
    t1.dept="ece";
    t1.num=1121;
    t1.salary=23000;
   cout <<"name is "<<t1.name<<" "<<"dept is "<<" "<<t1.dept<<endl;
   return 0;

}