# include <iostream>
# include <string>
using namespace std;
struct car{
    string name;
    int year;
    int price;
};
int main(){
struct car c1={"bmw",1990,10000000};
struct car c2;
cout <<"enter name of car";
cin >> c2.name;
cout <<"enter year";
cin >> c2.year;
cout <<"enter price";
cin >> c2.price;
cout <<"details of car1 is "<<c1.name<<" "<<c1.year<<" "<<c1.price<<endl;
cout <<"details of car1 is "<<c2.name<<" "<<c2.year<<" "<<c2.price<<endl;
return 0;

}