#include <iostream>
using namespace std;

void printArr(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        bool isSwap = false;

        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1]) // ascending order
            {
                swap(arr[j], arr[j + 1]);
                isSwap = true;
            }
            /* if(arr[j]<arr[j+1])// for descending order
            {
                 swap(arr[j],arr[j+1]);
             }*/
        }
        if (!isSwap)
        {
            // it means array is already sorted
            printArr(arr, n);
            return;
        }
    }
}

int main()
{

    int exarr[] = {2, 0, 1, 4, 6, 5, 7, 3};
    // int exarr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    int ingt = sizeof(exarr) / sizeof(int);

    bubbleSort(exarr, ingt);
    // time complexity  is big O(n^2)

    return 0;
}