#include <iostream>
using namespace std;
// WAF to find bionomial cofactor of given n and r ;

int fact(int num)
{
    int fac = 1;
    if (num < 0)
    {
        return -1;
    }
    else
    {

        for (int i = num; i >= 1; i--)
        {
            fac *= i;
        }
        return fac;
    }
}

int binoCofac(int n, int r)
{
    int val1 = fact(n);
    int val2 = fact(r);
    int val3 = fact(n - r);

    if (val1 == -1 || val2 == -1 || val3 == -1)
    {
        cout << "INVALID NUMBERS" << endl;
        return -1;
    }

    int result = val1 / (val2 * val3);
    return result;
}

int main()
{
    int n, r;
    cout << "Enter value of n : ";
    cin >> n;
    cout << "Enter value of r : ";
    cin >> r;

    cout << "Binomial cofactor of given n and r is " << binoCofac(n, r) << endl;

    return 0;
}