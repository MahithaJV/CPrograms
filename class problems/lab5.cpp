# include <iostream>
using namespace std;
class time{
    private:
    int hours;
    int mintues;
    int seconds;
    public:
    //default constructor
    time(){
        hours=0;
        mintues=0;
        seconds=0;
    }
    //parametersied constructor
    time(int h,int m,int s){
        hours=h;
        mintues=m;
        seconds=s;
    }
    //member function to show value
    void showvalue(){
        cout <<"time is:"<<hours<<":"<<mintues<<":"<<seconds<<endl;
    }
    //function to add time
    void add(time t1,time t2){
        time t3;
        t3.hours=t1.hours+t2.hours;
        t3.mintues=t1.mintues+t2.mintues;
        t3.seconds=t1.seconds+t2.seconds;

       
    }
    
};
int main(){
    time t1,t2(3,45,33),t3;
    t1.showvalue();
    t2.showvalue();
   t3.add(t1,t2);
       t2.showvalue();
   return 0;

}