 # include <iostream>
using namespace std;
int main(){
    string a;
    cout <<"enter string"<<endl;
    cin >> a;
    for(int i=0;i<7;i++){
    cout << a.at(i)<<endl;
    }
    a.at(0)='m';
    cout <<a;
    return 0;

    

}