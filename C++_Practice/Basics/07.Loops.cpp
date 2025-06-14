#include <iostream>
using namespace std;
int main() 
{
    //Loops (for, while, do-while)
    cout << "For loop: ";
    for (int i = 1; i <= 5; i++) 
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "While loop: ";
    int j = 1;
    while (j <= 5) 
    {
        cout << j << " ";
        j++;
    }
    cout << endl;

    cout << "Do-While loop: ";
    int k = 1;
    do 
    {
        cout << k << " ";
        k++;
    }
    while (k <= 5);
    cout << endl;

   return 0;
}