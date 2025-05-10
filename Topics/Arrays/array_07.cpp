#include <iostream>
using namespace std;

void printSubarrays(int *arr, int n)
{

    int i, j;

    for (i = 0; i < n; i++)
    {
        for (j = i; j < n; j++)
        {
            cout << "(";
            for (int k = i; k <= j; k++) // this loop is just to print the arrays
            {
                cout << arr[k] << ",";
            }
            cout << ")";
            cout << ", ";
        }
        cout << endl;
    }
}

int main()
{

    int exarr[] = {1, 2, 3, 4, 5}; // exarr stands for example array

    int lngt = sizeof(exarr) / sizeof(int);

    printSubarrays(exarr, lngt);

    return 0;
}