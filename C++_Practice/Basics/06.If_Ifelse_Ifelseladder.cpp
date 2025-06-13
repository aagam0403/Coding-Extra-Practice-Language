#include <iostream>
using namespace std;
int main() 
{
    //If Statement Only
    int value1;
    cout << "Enter a number: ";
    cin >> value1;
    if (value1 > 0)
        cout << "The number is positive." << endl;

    //If-Else Statement
    int value2;
    cout << "Enter a number: ";
    cin >> value2;
    if (value2 % 2 == 0)
        cout << "Even number." << endl;
    else
        cout << "Odd number." << endl;

    //If-Else Ladder
    int value3;
    cout << "Enter a number: ";
    cin >> value3;
    if (value3 > 0)
        cout << "Positive" << endl;
    else if (value3 < 0)
        cout << "Negative" << endl;
    else
        cout << "Zero" << endl;

   return 0;
}