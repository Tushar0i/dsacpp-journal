#include<iostream>
using namespace std;

//Binary search
int binarySearch(int *arr, int n, int target){

    int start = 0,end = n-1;

    while(start<=end){
        int mid = (start+end)/2;

        if(arr[mid]==target){
            return mid;
        }else if(arr[mid]<target){
            start = mid+1;
        }else{
            end = mid-1;
        }
        
    }
    return -1;


}

int main(){

    int exarr[] = {1,3,5,7,9,11,13,15,17}; // sorted array
    int lngt = sizeof(exarr)/sizeof(int);
    int key = 3;

    cout<<"Found key at index "<< binarySearch(exarr,lngt,key)<<endl;



    return 0;
}