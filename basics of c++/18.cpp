# include <iostream>
using namespace std;
int main(){
    string a[50];
    int n;
    cout <<"enter size of array";
    cin >> n;
    int i;
    for(i=0;i<n;i++){
        cout <<"enter string requried";
        cin >> a[i];
    }
    for(i=0;i<n;i++){
        cout <<"entered string is" <<a[i]<<endl;
    }
    return 1;
}