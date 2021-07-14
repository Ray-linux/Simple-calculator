// project
// making a simple calculator

#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, char const *argv[])
{
    float a;
    float b;
    float c;
    char op;
    // op means oparation
    int n;
    float sum=0;
    int digit;
    cout << "use '+' for Addition." << endl;
    cout << "use '-' for Substraction" << endl;
    cout << "use '*' for Multiplication" << endl;
    cout << "use '/' for Division" << endl;
    cout << "use '^' for find squre-root " << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "Enter the first number : ";
    cin >> a;
    cout << "What is your oparation? ";
    cin >> op;
    switch (op)
    {
    case '+':
        cout << "Enter the next number : ";
        cin >> b;
        cout << "Addition of these number is = " << a+b+c << endl;
        break;
    case '-':
        cout << "Enter the next number : ";
        cin >> b;
        cout << "Substraction of these number is = " << a - b << endl;
        break;
    case '*':
        cout << "Enter the next number : ";
        cin >> b;
        cout << "Multiplication of these number is = " << a * b << endl;
        break;
    case '/':
        cout << "Enter the next number : ";
        cin >> b;
        cout << "Division of these number is = " << a / b << endl;
        break;

    case '^': // "^" these symbol is use for defind squre root
        cout << "Squre root of the number is = " << sqrt(a) << endl;
        break;
  
    default:
        break;
    }
    return 0;
}
