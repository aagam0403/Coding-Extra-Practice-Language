#include <iostream>
using namespace std;
int main() {
    // Pointers - Basic Example
    int x = 10;
    int* ptr = &x;  // pointer holds the address of x
    cout << "Value: " << x << ", Address: " << ptr << ", Value at Address: " << *ptr << endl;
    cout << "--------------------------------------" << endl;

    // Pointer to Different Variable
    int y = 20;
    ptr = &y;  // Now ptr points to y
    cout << "Value: " << y << ", Address: " << ptr << ", Value at Address: " << *ptr << endl;
    cout << "--------------------------------------" << endl;

    //Null Pointer and Checking
    int* nullPtr = nullptr;
    if (nullPtr == nullptr) {
        cout << "Pointer is null, does not point to any address." << endl;
    }

    return 0;
}