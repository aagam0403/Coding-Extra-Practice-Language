#include <iostream>
using namespace std;
int main() 
{
    // Function with no parameters and no return type
    void greet() 
    {
        cout << "Hello from greet function!" << endl;
    }

    // Function with parameters and no return type
    void printSum(int a, int b) 
    {
        cout << "Sum: " << (a + b) << endl;
    }
    
    // Function with no parameters but returns a value
    int returnTen() 
    {
        return 10;
    }

    // Function with parameters and returns a value
    int multiply(int a, int b) 
    {
        return a * b;
    }

    // Inline function example
    inline int cube(int x) 
    {
        return x * x * x;
    }

    // Calling the functions
    cout << "
    Function Examples:" << endl;
    greet();
    printSum(4, 6);
    cout << "Returned Value: " << returnTen() << endl;
    cout << "Multiplication Result: " << multiply(3, 5) << endl;
    cout << "Cube of 3: " << cube(3) << endl;

   return 0;
}