# include <iostream>
# include <string>
using namespace std;
int main(){
    string a;
    cout<<"enter string";
    cin >> a;
    string* b=&a;
    cout <<a<<endl;
    cout <<&a<<endl;
    cout <<b<<endl;
    cout <<&b<<endl;
    cout <<*b<<endl;
    return 0;

    }