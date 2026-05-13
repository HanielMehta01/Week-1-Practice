#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter two of your selected numbers :";
    cin >> a >> b;
    if (a > b)
    {
        cout << a << "is larger than " << b;
    }
    else if (a < b)
    {
        cout << b << "is larger than " << a;
    }
    else
    {
        cout << "Both of the given numbers are equal ";
    }
}
{
