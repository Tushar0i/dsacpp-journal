#include <iostream>
using namespace std;

// converting a binary number to a decimal

void convToDec(int num)
{
    int decNum = 0;
    int power = 1;
    while (num > 0)
    {
        int lastDigit = num % 10;

        decNum += (lastDigit * power);

        power *= 2;

        num /= 10;
    }

    cout << decNum << endl;
}

int main()
{
    convToDec(10101);

    return 0;
}