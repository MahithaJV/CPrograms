# include<iostream>
using namespace std;
class test{
    int x;
    public:
    test(){
        x=0;
    }
    test(int a){
        x=a;
    }
    void showvalue(){
        cout<<x<<endl;
    }
    int operator ++();//pre
    int operator ++(int );//post

};
int test :: operator++(){
    x=x++;
    return x;
}
int test :: operator++(int x){
    int vol;
    vol=x;
    x=x++;
    return x;
}
int main(){
test t;
int i,j;
i=t++;
cout<<i<<endl;
t.showvalue();
j=++t;
cout<<j<<endl;
t.showvalue();
return 0;

}