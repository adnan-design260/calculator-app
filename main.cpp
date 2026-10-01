#include <iostream>
using namespace std;

int main()
{
    int number1 = 20;
    int number2 = 5;

    cout << "Simple Calculator" << endl;

    cout << "Sum: "
         << number1 + number2 << endl;

    cout << "Difference: "
     << number1 - number2 << endl;

     cout << "Division: "
     << number1 / number2 << endl;
     

    return 0;
}

int Add(int number1, int number2)
{
    return number1 + number2;
}