# include <iostream>
using namespace std;
int main(){
    int i,n;
  
    cout <<"enter num";
    cin >> n;
    for(int j=0;j<n;j++)
    (j%2==0)?cout <<"even number"<<j<<endl:cout <<"odd number"<<j<<endl;
    return 0;
}