#include <iostream>
using namespace std;

int main()
{

    int marks[] = {1, 2, 5, 6, 7, 34, 67};
    int a[10]; // have garbge value
    int b[4] = {1, 3};
    int lengthOfArr = sizeof(marks) / sizeof(int); // size of array/size of type

    cout << a[2] << "\n"; // garbage value
    cout << b[3] << "\n"; // value = 0


    return 0;
}