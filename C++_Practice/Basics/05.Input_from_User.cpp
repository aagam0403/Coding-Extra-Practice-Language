#include <iostream>
#include <string>
using namespace std;
int main() 
{
    int intNumber;
    float floatNumber;
    double doubleNumber;
    char character;
    bool booleanValue;
    string text;

    // Input and Output for int
    cout << "Enter an integer: ";
    cin >> intNumber;
    cout << "You entered integer: " << intNumber << endl;

    // Input and Output for float
    cout << "Enter a float: ";
    cin >> floatNumber;
    cout << "You entered float: " << floatNumber << endl;

    // Input and Output for double
    cout << "Enter a double: ";
    cin >> doubleNumber;
    cout << "You entered double: " << doubleNumber << endl;

    // Input and Output for char
    cout << "Enter a character: ";
    cin >> character;
    cout << "You entered character: " << character << endl;

    // Input and Output for bool
    cout << "Enter a boolean (0 or 1): ";
    cin >> booleanValue;
    cout << "You entered boolean: " << boolalpha << booleanValue << endl;

    // Input and Output for string
    cout << "Enter a string: ";
    cin.ignore();             // To ignore leftover newline from previous input
    getline(cin, text);       // To input string with spaces
    cout << "You entered string: " << text << endl;
   return 0;
}