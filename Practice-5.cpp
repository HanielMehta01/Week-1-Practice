#include <iostream>
using namespace std;
int main()
{
    cout << "Enter your selected number: ";
    int a;
    cin >> a;
    if (a % 2 == 0)
    {
        cout << "YOur selected number is even: " << endl;
    }
    else
    {
        cout << "Your selected number is odd: " << endl;
    }
    return 0;
}