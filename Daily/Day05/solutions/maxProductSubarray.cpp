#include <iostream>
using namespace std;

int maxProduct1(int nums[], int n)
{ // my initial solution

    int maxProd = INT_MIN;

    for (int i = 0; i < n; i++)
    {

        int product = 1;
        for (int j = i; j < n; j++)
        {

            product *= nums[j];

            maxProd = max(maxProd, product);
        }
    }
    return maxProd;
}

int maxProduct2(int nums[], int n)
{

    int maxTillNow = nums[0];
    int minTillNow = nums[0];
    int ans = maxTillNow;
    for (int i = 1; i < n; i++)
    {
        int curr = nums[i];
        int tempMaxTillNow = max(curr, max(maxTillNow * curr, minTillNow * curr));
        minTillNow = min(curr, min(maxTillNow * curr, minTillNow * curr));
        maxTillNow = tempMaxTillNow;
        ans = max(maxTillNow, ans);
    }
    return ans;
}

int main()
{

    int exarr[] = {1, 2, 5, -3, -7, 9, -3};

    int lngt = sizeof(exarr) / sizeof(int);

    cout << "Maximum sub array product is : " << maxProduct2(exarr, lngt) << endl;

    return 0;
}