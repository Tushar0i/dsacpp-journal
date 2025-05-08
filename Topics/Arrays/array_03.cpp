#include <iostream>
using namespace std;

void change(int arr[])
{
    arr[0] = 100;
}

void change2(int *pointer)
{
    pointer[0] = 50;
}

void printArray(int nums[], int n) // to run loop we have to pass the length of the array
{ 

    cout << "Size of num is " << sizeof(nums) << " bytes because it is a pointer" << "\n";

    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ,";
    }
    cout << "\n";
}

int main()
{

    // Arrays are always paseed by reference
    int arr[] = {2, 4, 6, 8, 10, 12, 14};

    change(arr); // passing array name is equavalent of passing a pointer;

    change2(arr);

    cout << arr[0] << "\n";

    int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    int n = sizeof(array) / sizeof(int);

    printArray(array, n);

    return 0;
}