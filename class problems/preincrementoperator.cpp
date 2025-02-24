#include <iostream>
using namespace std;

int main()
{

    int x = 10;

    cout << "Value of x before post-incrementing";

    cout << "\nx = " << x;

    x = x++;

    cout << "\nValue of x after post-incrementing";

    // Value of a will not change
    cout << "\nx = " << x;

    return 0;
}
