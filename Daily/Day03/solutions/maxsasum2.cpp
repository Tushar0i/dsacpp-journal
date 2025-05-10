#include <iostream>
using namespace std;

//find maximum subarray sum (brute force approch optamized);

int maxSubarraySum(int* arr , int n){

    int maxSum = INT_MIN;

    for (int start = 0; start < n; start++)
    {
        int sum  = 0 ;
        for (int end = start; end < n; end++)
        {
            sum += arr[end];
            
            maxSum = max(maxSum,sum);
        }
        
    }

    return maxSum;

    // time complexity is O(n^2)
}

int main(){

    int exarr[] = {-1,0,-2,-5,-3,-5,0,-4};

    int lngt = sizeof(exarr)/sizeof(int);

    cout<<"Max = "<<maxSubarraySum(exarr,lngt)<<"\n"; 

    return 0;
}