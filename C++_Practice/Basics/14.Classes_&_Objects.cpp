#include <iostream>
using namespace std;
int main() 
{
    class Car {
    public:
        string brand;
        int year;

        void start() {
            cout << brand << " is starting..." << endl;
        }
    } myCar;

    myCar.brand = "Toyota";
    myCar.year = 2022;
    myCar.start();
    return 0;
}