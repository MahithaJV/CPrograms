# include <iostream>
# include <cmath>
using namespace std;
int main(){
    int a[3][3];
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout << "enter element :"<<endl;
             cin >> a[i][j];
        }
    }
        for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout << a[i][j]    << "";

        }
        cout <<endl;
    }
    return 0;
}

