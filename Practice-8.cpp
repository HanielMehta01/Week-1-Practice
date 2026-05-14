#include <iostream>
using namespace std;
int main()
{
    int a, b;
    char c;
    cout << "What you want to do Addition, SUbtraction, Multiplication, Dividion? " << endl;
    cout << "Enter two of your selected numbers: " << endl;
    cin >> a >> b;
    cout << "Use first letter of the operation wich you want to do:- " << endl;
    cin >> c;
    switch (c)
    {
    case 'A': //  'a'
        cout << "The addition of the two numbers is : " << a + b << endl;
        break;
    case 'S': //  's'
        cout << "The subtraction of the two numbers is : " << a - b << endl;
        break;
    case 'M': //  'm'
        cout << "The multiplication of the two numbers is : " << a * b << endl;
        break;
    case 'D': //  'd'
        cout << "The division of the two numbers is : " << a / b << endl;
        break;
    default:
        cout << "Invalid input! Please enter A, S, M or D." << endl;
    }
    return 0;
}