# include<iostream>
using namespace std;
int main(){
    float *p=new float(20);
    cout<<"p value is"<<*p<<endl;
    delete p;
      cout<<"p value is"<<*p<<endl;
    int *q=new int[3];
    for(int i=0;i<3;i++){
       cout<<"enter element"<<endl;
        cin>>q[i];
    }
        cout<<"q value is"<<*q<<endl;
                cout<<"q value is"<<*(q+1)<<endl;
                        cout<<"q value is"<<*(q+2)<<endl;
}