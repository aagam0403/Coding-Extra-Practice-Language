#include <iostream>
using namespace std;
int main() 
{
    //Basic Array Initialization & Access
    int marks[5] = {90, 85, 75, 88, 95};
    cout << "Marks: ";
    for (int i = 0; i < 5; i++) 
    {
        cout << marks[i] << " ";
    }
    cout << endl;
    
    //Input from User and Output
    int numbers[5];
    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; i++) 
    {
        cin >> numbers[i];
    }
    cout << "You entered: ";
    for (int i = 0; i < 5; i++) 
    {
        cout << numbers[i] << " ";
    }
    cout << endl;

    //Sum of All Elements in Array
    int arr[5] = {10, 20, 30, 40, 50};
    int sum = 0;
    for (int i = 0; i < 5; i++) 
    {
        sum += arr[i];
    }
    cout << "Sum of elements: " << sum << endl;

    //Reverse Print of Array
    int arr[5] = {1, 2, 3, 4, 5};
    cout << "Array in reverse: ";
    for (int i = 4; i >= 0; i--) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    //2D Array Example (Matrix Input and Output)
    int matrix[2][2];
    cout << "Enter 2x2 matrix elements:" << endl;
    for (int i = 0; i < 2; i++) 
    {
        for (int j = 0; j < 2; j++) 
        {
            cin >> matrix[i][j];
        }
    }

    cout << "Matrix is:" << endl;
    for (int i = 0; i < 2; i++) 
    {
        for (int j = 0; j < 2; j++) 
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

   return 0;
}