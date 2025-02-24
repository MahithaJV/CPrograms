# include <iostream>
using namespace std;
int main(){
    int i,val;
    char ch;
    string a;
    cout <<"enter string";
    cin >>a;
    for(i=0;a[i]!='\0';i++){
         ch=a[i];
         val=ch;
         cout <<"ascii value of:"<<ch<<"is"<<val<<endl;
    }
    return 0;
}
