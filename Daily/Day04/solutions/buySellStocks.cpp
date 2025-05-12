#include <iostream>
using namespace std;

// Best time to buy and sell stock;

int maxProfit(int *arr, int n)
{

    int profit;
    int maxProfit = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        int sell = arr[i];

        for (int j = 0; j < i; j++)
        {
            int buy = INT_MAX;
            if (buy > arr[j])
            {
                buy = arr[j];
            }

            profit = sell - buy;

            if(maxProfit< profit){
                maxProfit = profit;
            }

        }
    }

    if(maxProfit<=0){
        return 0;
    }else{
        return maxProfit;
    }
}

int maxProfit2(int *arr, int n) {
    int minPrice = INT_MAX;
    int maxProfit = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] < minPrice) {
            minPrice = arr[i];
        } else {
            int profit = arr[i] - minPrice;
            if (profit > maxProfit) {
                maxProfit = profit;
            }
        }
    }

    return maxProfit;
}

int main()
{

    int array[] = {20, 1, 3, 5, 1, 9, 7, 4, 9, 20, 3, 10, 12, 9, 16};

    int lngt = sizeof(array)/sizeof(int);

    cout<<"Maximun profit = "<<maxProfit2(array,lngt)<<endl; // output 19 ;


    return 0;
}
