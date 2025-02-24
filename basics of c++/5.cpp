# include <iostream>
using namespace std;
int main(){
    string a="hello";
    cout <<a<<endl;
    string b;
    cout <<"enter other string";
     cin >> b;
     cout <<"full name is "<< a.append(b)<<endl;
     return 0;
     
}