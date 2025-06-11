#include <iostream>
using namespace std;
int main() 
{
    // 0.1 Operators
    // Arithmetic Operators
        int a = 10, b = 3;
        cout << "Addition: " << (a + b) << endl;       // 13
        cout << "Subtraction: " << (a - b) << endl;    // 7
        cout << "Multiplication: " << (a * b) << endl; // 30
        cout << "Division: " << (a / b) << endl;       // 3 (integer division)
        cout << "Modulus: " << (a % b) << endl;        // 1

    // Relational Operators
        cout << "a == b: " << (a == b) << endl; // 0 (false)
        cout << "a != b: " << (a != b) << endl; // 1 (true)
        cout << "a > b: " << (a > b) << endl;   // 1
        cout << "a < b: " << (a < b) << endl;   // 0

    // Logical Operators
        bool x1 = true, x2 = false;
        cout << "x1 && x2: " << (x1 && x2) << endl; // 0
        cout << "x1 || x2: " << (x1 || x2) << endl; // 1
        cout << "!x1: " << (!x1) << endl;           // 0

    // Assignment Operators
        int c = 5;
        c += 2;  // c = c + 2
        cout << "c += 2: " << c << endl;
        c *= 3;  // c = c * 3
        cout << "c *= 3: " << c << endl;

    // Increment / Decrement Operators
        int d = 10;
        d++;
        cout << "d++: " << d << endl; // 11
        --d;
        cout << "--d: " << d << endl; // 10
}