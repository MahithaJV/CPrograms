# include <iostream>
using namespace std;
int main(){
    int day;
    cout <<"enter day from(0-7)";
    cin >> day;
    switch(day){
        case 0: cout <<"mon";
        break;
        case 1: cout <<"tues";
        break;
        case 2: cout <<"wes"<<endl;
        break;
        default:
        cout <<"not valid";

    }
    cout <<"thank you";
    return 0;
}