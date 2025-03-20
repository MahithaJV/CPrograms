# include<iostream>
# include<string>
using namespace std;
class phone{
    protected:
    string imei;
    string model;
    string phoneno;
    public:
    phone(string a,string b,string c):imei(a),model(b),phoneno(c){
        cout<<"parent1"<<endl;
    };
    void makecall(){
        cout<<"making call from"<<phoneno<<endl;
    }
    void displayphone(){
        cout<<imei<<endl;
        cout<<model<<endl;
        cout<<phoneno<<endl;
    }
};
class computer{
    protected:
    string os;
    public:
    computer(string d):os(d){
        cout<<"parent2"<<endl;
    };
    void browse(){
        cout<<"browseing"<<endl;
    }
    void runnapp(){
        cout<<"running app:"<<os<<endl;
    }

};
class smartphone:public phone,public computer{
    private:
    int noc;
    public:
    smartphone(string a,string b,string c,string d,int n):phone(a,b,c),computer(d),noc(n){
        cout<<"child"<<endl;
    };
    void displaysmartphone(){
        cout<<imei<<endl;
        cout<<model<<endl;
        cout<<phoneno<<endl;
        cout<<os<<endl;
        cout<<noc<<endl;
    }
};
int main(){
    smartphone s1("1234","ma","94408","mem",4);
    s1.displaysmartphone();
    s1.makecall();
    s1.runnapp();
}