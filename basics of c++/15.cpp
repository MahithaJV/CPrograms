# include <iostream>
# include <cmath>
using namespace std;
int main(){
    int x;
    cout << "enter element 1";
    cin >> x;


        int y;
    cout << "enter element 2";
    cin >> y;


     int a;
    cout << "enter element 3";
    cin >> a;


     int b;
    cout << "enter element 4";
    cin >> b;


   int r= max(x,y);
    cout << "max is "<< r <<endl;
    int r1=min(a,b);
    cout <<"min is "<< r1;
    return 0;
    
}