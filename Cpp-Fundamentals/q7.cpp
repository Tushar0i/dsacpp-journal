#include <iostream>
using namespace std;
// converting a decimal number to a binary number


void convtToBinr(int num)
{

    int dig, pow = 1, binary = 0 ;

    do
    {
        dig = num % 2;
        num /= 2;
        binary += (dig * pow);

        pow *= 10;

    } while (num > 0);

    cout << binary<< endl;
}

int main()
{

    convtToBinr(10);

    return 0;
}