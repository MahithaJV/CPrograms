# include <iostream>
using namespace std;
//function declaration
void printarray(){
int a[5],i;
    for(i=0;i<5;i++){
        cout <<"enter element";
        cin >>a[i];
    }
     for(i=0;i<5;i++){
        cout <<a[i];
             if(i!=4)
                cout <<",";
                else 
                cout <<".";

     }
}


int main(){
     printarray();
    return 0;
}