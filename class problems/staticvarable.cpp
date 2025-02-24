# include <iostream>
using namespace std;
class serialnum{
    private:
   static int count;
    public:
    serialnum(){
        count++;
    }
    int getcount(){
        return count;
    }
};
int serialnum::count;
int main(){
   serialnum s1,s2;
   cout <<s1.getcount()<<endl;
   cout <<s2.getcount()<<endl;
   return 0;

}