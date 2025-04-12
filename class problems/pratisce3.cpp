# include<iostream>
using namespace std;
class student{
    private:
    static int mis;
    public:
    //constuctor
    student()
    {
        cout<<"hi"<<endl;
        mis++;
    }
    //deconstuctor
    ~student()
    {
        cout<<"bye"<<endl;
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
    cout<<s1.getvalue()<<endl;//3
    cout<<s2.getvalue()<<endl;//3
    //{
      //  student s3;
        //    cout<<s2.getvalue()<<endl;
    //}

    cout<<s1.getvalue()<<endl;//3
   
    s3.~student();
    cout<<s2.getvalue()<<endl;
    cout<<s2.getvalue()<<endl;
    return 0;
    
}