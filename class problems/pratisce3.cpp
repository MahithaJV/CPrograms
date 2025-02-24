# include<iostream>
using namespace std;
class student{
    private:
    static int mis;
    public:
    //constuctor
    student()
    {
        mis++;
    }
    //deconstuctor
    ~student()
    {
        mis--;
    }
    int getvalue(){
        return mis;
    }
};
//syntax for static varablie
int student::mis;
int main(){
    student s1,s2,s3;
    cout<<s1.getvalue()<<endl;
    cout<<s2.getvalue()<<endl;
    //{
      //  student s3;
        //    cout<<s2.getvalue()<<endl;
    //}

    cout<<s1.getvalue()<<endl;
   
    s3.~student();
    cout<<s2.getvalue()<<endl;
    cout<<s2.getvalue()<<endl;
    return 0;
    
}