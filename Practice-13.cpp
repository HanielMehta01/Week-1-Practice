#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter your selected number top find its multiplication table:";
    cin >> a;
    cout << "Multiplication table of " << a << "is : " << endl;
    for (int i = 1; i <= 10; i++)
    {
        cout << i << "X" << a << "=" << i * a << endl;
    }
    return 0;
}