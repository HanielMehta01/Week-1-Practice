#include <iostream>
using namespace std;
int main()
{
    int n, a = 0;
    cout << "Enter a number:";
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        a = a + i;
    }
    cout << "The sum of the first " << n << " natural numbers is: " << a << endl;
    return 0;
}