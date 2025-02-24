# include <iostream>
# include <cmath>
using namespace std;
int main(){
    int a;
    cout << "enter number";
    cin >> a;
    int i,r,rev=0;
    for(i=a;i>0;i=i/10){
        r=i%10;
        rev=rev*10+r;
    }
    cout <<"rev of given num is "<< rev << endl;
    return 0;
    }