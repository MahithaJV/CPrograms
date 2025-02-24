# include <iostream>
# include <string>
using namespace std;
class student{
    public:
    string name;
    string dept;
student(string name,string dept){
    this->name=name;
    this->dept=dept;
}
//custom costructor
student(student &org){
    this->name=org.name;
    this->dept=org.dept;
}

    void getinfo(){
        cout <<"name is:"<<name<<endl;
        cout <<"dept is:"<<dept<<endl;
    }


};
int main(){
    student s1("mahi","ece");
   
    //by deafault copy constructor
   student s2(s1);
    s2.getinfo();
    return 0;
}