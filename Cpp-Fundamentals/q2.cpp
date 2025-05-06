#include <iostream>
using namespace std;
int fact(int num)
{
    int fac = 1;
    if (num < 0)
    {
        cout << "Invalid number";
        return -1;
    }
    else
    {

        for (int i = num; i >= 1; i--)
        {
            fac *= i;
        }
        cout<<"Factorial of ("<<num<<") = "<<fac;
        return fac;
    }
}

int main()
{
    
    cout << "Enter number : ";
    int a;
    cin >> a;
    
    
    fact(a);
    
    return 0;
}
