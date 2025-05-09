#include <iostream>
using namespace std;

// Reverse an array without using extra space;

void reverse(int *arr, int n)
{
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {

        // int temp = arr[end];
        // arr[end] = arr[start];
        // arr[start] = temp;

        swap(arr[start],arr[end]);

        start++;
        end--;
    }
}

int main()
{

    int exarr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    int lngt = sizeof(exarr) / sizeof(int);

    reverse(exarr, lngt);

    for (int i = 0; i < lngt; i++)
    {
        cout << exarr[i] << ",";
    }
    cout<<endl;

    return 0;
}