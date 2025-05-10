#include<iostream>
using namespace std;

//find maximum subarray sum (brute force approch);

int maxSubarraySum(int* arr , int n){

    int maxSum = INT_MIN;

    for (int start = 0; start < n; start++)
    {
        for (int end = start; end < n; end++)
        {
            int sum  = 0 ;
            for(int i = start; i<=end; i++){
                sum += arr[i];
            }
            
            maxSum = max(maxSum,sum);
        }
        
    }

    return maxSum;

    // time complexity is O(n^3)
}



int main(){


    int exarr[] = {-1,1,-9,5,0,8,-3,8,7};

    int lngt = sizeof(exarr)/sizeof(int);

    cout<<"Max = "<<maxSubarraySum(exarr,lngt)<<"\n";
   
    return 0;
}