# include <iostream>
using namespace std;
int main(){
    int n;
    cout <<"enter n";
    cin >>n;
    int tem=n;
    int r,i,rev=0;
    for(i=n;i<0;i=i/10){
        r=i%10;
        rev=rev*10+r;
    }
    if(rev==tem)
    cout <<"palindrome";
    else
    cout <<"not a aplindrome";
    return 0;
    }