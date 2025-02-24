#include <iostream>
#include <string>
using namespace std;

int main() {
  string food ;  // A string variable
  cout <<"enter required string";
  getline(cin,food);
  string* ptr = &food;  // A pointer variable that stores the address of food

  // Output the value of food
  cout << food << "\n";

  // Output the memory address of food
  cout << &food << "\n";

  // Output the memory address of food with the pointer
  cout << ptr << "\n";
    cout << *ptr << "\n";
  return 0;
}
