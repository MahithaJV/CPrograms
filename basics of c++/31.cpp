#include <iostream>
# include <string>
using namespace std;
struct student{
    string name;
    int mis;
    char sec;
    string dept;
};
int main() {
    int n;
    cout <<"Enter num of students";
    cin >> n;
  struct student s[n];
  int i;
  for(i=0;i<n;i++){
   cout << "enter name";
   cin >> s[i].name;
   cout <<"enter mis";
   cin >> s[i].mis;
   cout <<"enter sec";
   cin >>s[i].sec;
   cout <<"enter dept";
   cin >> s[i].dept;
   
  }
  for(i=0;i<n;i++){
   
   cout << s[i].name<<endl;
    cout << s[i].mis<<endl;
     cout << s[i].sec<<endl;
      cout << s[i].dept<<endl;

   
  }
  

    return 0;
}