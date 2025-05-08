#include <iostream>
using namespace std;

// Reverse an array with extra space;

void printArray(int *arr ,int n){

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ,";
    }
    cout<<"\n";
}


int main()
{

    int arr[] = {1,2,4,5,6,9,11};

    int n = sizeof(arr)/sizeof(int);

    int copyArr[n];

    for (int i = 0; i < n; i++)
    {
        int j = n-i-1;
        copyArr[i] = arr[j] ;
    }
    
    for (int i = 0; i < n; i++)
    {
        copyArr[i] = arr[i];
    }
    
    printArray(arr,n);

    return 0;
}