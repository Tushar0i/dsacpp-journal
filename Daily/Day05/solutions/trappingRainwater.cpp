#include <iostream>
using namespace std;

void waterTrapped(int *arr, int n)
{
    int leftMax[20000];
    int rightMax[20000];
    leftMax[0] = arr[0];
    rightMax[n - 1] = arr[n - 1];

    for (int i = 1; i < n; i++)
    {
        leftMax[i] = max(leftMax[i - 1], arr[i - 1]);
        // cout << leftMax[i] << " ";
    }

    cout << endl;
    for (int i = n - 2; i >= 0; i--)
    {
        rightMax[i] = max(rightMax[i + 1], arr[i + 1]);
        // cout << rightMax[i] << " ";
    }

    cout << endl;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {

        int trap = min(leftMax[i], rightMax[i]) - arr[i];
        if (trap > 0)
        {

            sum += trap;
        }
    }
    cout << "Water trapped = " << sum << " units." << endl;
}

int main()
{

    int exarr[] = {4, 2, 0, 6, 3, 2, 5};
    // int exarr[] = {7,2,4,2,9,5,3,5,0,8,7,10};

    int lngt = sizeof(exarr) / sizeof(int);

    waterTrapped(exarr, lngt);

    return 0;
}