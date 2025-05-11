#include <iostream>
using namespace std;

int linearSearch(int *array , int length , int key){

    for (int i = 0; i < length; i++)
    {
        if(array[i] == key){
            return i;
        }
    }
    return -1;

} // time complexity is O(n) linear graph 

int main()
{

    int arr[] = {2,3,5,7,11,13,17,19,23};
    int n = sizeof(arr)/sizeof(int);

    int key = 17;

    cout<<"Key found at index : "<<linearSearch(arr , n, key )<<"\n";

    return 0;
}