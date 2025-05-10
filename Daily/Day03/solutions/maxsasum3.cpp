#include <iostream>
using namespace std;

// find maximum subarray sum (kadane's algorithm);

int maxSubarraySum(int *arr, int n)
{

    int currSum = 0;
    int maxSum = INT_MIN;

    for (int i = 0; i < n; i++)
    {

        currSum += arr[i];
        maxSum = max(maxSum,currSum);
        if (currSum < 0)
        {
            currSum = 0;
        }
    }

    return maxSum;

    // time complexity is O(n)
}

int main()
{

    int exarr[] = {-1, 0,-2, -5, -3, -5, -4};

    int lngt = sizeof(exarr) / sizeof(int);

    cout << "Max = " << maxSubarraySum(exarr, lngt) << "\n"; // output = 0

    return 0;
}