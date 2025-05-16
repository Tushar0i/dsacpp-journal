#include <iostream>
using namespace std;

void printArr(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}

void selectionSort(int arr[], int n){

    for (int i = 0; i < n-1; i++)
    {
        int minIdx = i;
        for (int j = i+1; j < n; j++)
        {
            if(arr[j]<arr[minIdx]){ // use ">" for descending order;
                minIdx = j;
            }
        }
        swap (arr[i],arr[minIdx]);
        

    }
    printArr(arr,n);
}

int main(){

    int exarr[] = {4,0,6,2,9,3,1,5,7,8};
    int lngt  = sizeof(exarr)/sizeof(int);

    selectionSort(exarr, lngt);

    // time complexity is O(n^2);


    return 0;
}