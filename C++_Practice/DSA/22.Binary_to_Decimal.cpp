//Binary Number System
#include <iostream>
using namespace std;

int binToDecimal (int binNum)
{
    int ans = 0, pow = 1;
    while(binNum>0)
    {
        int rem = binNum %10;
        ans += rem * pow;
        
        binNum /= 10;
        pow *= 2;
    }
    return ans; //Decimal Form
}
int main() 
{
    cout<<binToDecimal(110010) << endl;
    return 0;
}