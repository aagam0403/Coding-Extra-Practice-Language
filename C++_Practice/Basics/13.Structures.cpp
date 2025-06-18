#include <iostream>
using namespace std;
int main() 
{
   struct Student 
   {
        int id;
        string name;
    } s1;

    s1.id = 1;
    s1.name = "Aagam";
    cout << "Student ID: " << s1.id << ", Name: " << s1.name << endl;
    return 0;
}