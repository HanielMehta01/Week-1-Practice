#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter thew number from where you want to start counting down: ";
    cin >> a;
    for (int i = a; i >= 1; i--)
    {
        cout << i << endl;
    }