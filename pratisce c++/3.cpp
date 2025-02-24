# include <iostream>
using namespace std;
int main(){
    int a,b;
    cout <<"rnter a";
    cin >>a;
    cout <<"enter b";
    cin >>b;
    int tem;
    tem=a;
    a=b;
    b=tem;
    cout <<"after execution";
    cout <<a<<endl;
    cout <<b<<endl;
    return 0;
}