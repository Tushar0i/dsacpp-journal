#include <iostream>
using namespace std;


int main()
{
    int array[14] = {1, 3, 5, 3, 99, 6, 8, 0, 23, 4, 65, 5, 2, 0};

    int max = array[0];
    int n = sizeof(array) / sizeof(int);

    for (int i = 0; i < n; i++)
    {
       
        if (max < array[i])
        {
            max = array[i];
        }
    }

    cout << "Maximun num in the array is " << max << "\n";

    return 0;
}