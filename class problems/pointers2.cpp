# include<iostream>
using namespace std;
int main(){
    int n=4;
    int *p1,*p2;
    p1=&n;
    p2=&n;
    cout<<"before:"<<endl;
    cout<<n<<endl;
    cout<<p1<<endl;
    cout<<p2<<endl;
    cout<<*p1<<endl;
    cout<<*p2<<endl;
    cout<<"after addition"<<endl;
    p2=p2+2;
        cout<<n<<endl;
    cout<<p1<<endl;
    cout<<p2<<endl;
    cout<<*p1<<endl;
    cout<<*p2<<endl;//garrbage value
}
