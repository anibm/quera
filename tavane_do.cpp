#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int number;
    int nextPowerTwo;
    cin >> number;

    nextPowerTwo = pow(2, floor(log2(number)) + 1);
    cout << nextPowerTwo;
    return 0;
}