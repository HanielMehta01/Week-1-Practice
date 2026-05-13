#include <iostream>
using namespace std;
int main()
{
    cout << "Enter your selected number : ";
    int a;
    cin >> a;
    if (a > 0)
    {
        cout << "The number" << a << "is positive. " << endl;
    }
    else if (a < 0)
    {
        cout << "The number" << a << "is negative. " << endl;
    }
    else
    {
        cout << "The number" << a << "is neither positive nor negative it is zero. " << endl;
    }
    return 0;
}