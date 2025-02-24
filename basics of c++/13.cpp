# include <iostream>
using namespace std;
int main(){
    string a[4];
    int i;
    for(i=0;i<4;i++){
        cout << "enter string";
        cin >> a[i];
    }
    for (i=0;i<4;i++){
        cout << a[i] <<endl;
    }
    
    return 0;
}