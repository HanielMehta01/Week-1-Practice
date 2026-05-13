#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter your selected number: ";
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