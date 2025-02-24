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
    //parameterised constructor
    teacher(string S,string d,int n,int s){
        cout <<"hi bro"<<endl;
        name=S;
        dept=d;
        num=n;
        salary=s;
    }
    void getinfo(){
        cout <<name<<endl;
        cout <<dept<<endl;
        cout <<num<<endl;
        
    }
};
    int main(){
        teacher t1={"mahi","cse",112416032,2500000};
        t1.getinfo();
        teacher t2={"tharun","Ee",22333333,2342222222222222};
        t2.getinfo();
        return 0;
    }
    
    

