#include <iostream>
using namespace std;

int main()
{

    // Taking input and outpot in a array;

    int n;
    cout << "Enter the length of your array : ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {

        cin >> arr[i];
    }

    cout << "Pinting array" << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ,";
    }

    return 0;
}