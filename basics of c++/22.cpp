# include <iostream>
# include <string>
using namespace std;
int main(){
    string a="pizza";
    string &b=a;  //refering to the variable a only
    cout << "entered string os "<<" "<<a<<endl;
    cout << "entered string os "<<" "<<b<<endl;//since b also refering to the same variable
        cout << "entered string os "<<" "<<&a<<endl;
    cout << "entered string os "<<" "<<&b<<endl;
    return 0;

}