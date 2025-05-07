#include <iostream>

// symbolic constant
#define X 305;

using namespace std;

void changeNum(int *ptr)
{ // pass by reference using pointers

    *ptr = 100;

    cout << *ptr << "\n";
}

void changeNum(int &a)
{ // pass  by reference using referencr variable

    a = 12;

    cout << a << "\n";
}

int main()
{
    cout << "Hello, World!" << endl;
    cout << "Hello, World!\n"
         << "shifting to cpp\n";

    int newNum = 99;

    changeNum(&newNum);
    cout << newNum << "\n";

    int newNum2 = 29;

    changeNum(newNum2);

    cout << newNum2 << "\n";

    int number = 10;

    int *ptr = &number;

    cout << &number << " = " << ptr << endl; // & = Address of

    float exp = 98.09;
    float *ptr2 = &exp;
    float **ptr3 = &ptr2;

    cout << &exp << " = " << ptr2 << endl;  // & = Address of
    cout << &ptr2 << " = " << ptr3 << endl; // & = Address of

    cout << "size of ptr = " << sizeof(ptr) << " bytes" << "\n";
    cout << "size of ptr2 = " << sizeof(ptr2) << " bytes" << "\n";
    cout << "size of ptr3 = " << sizeof(ptr3) << " bytes" << "\n";

    // '*' can also be use as dereferencing operator

    int exml = 1003;

    int *pointer = &exml;

    *pointer = 10003;

    cout << pointer << "\n";

    cout << exml << "\n";

    cout << sizeof(int) << endl;
    cout << sizeof(long int) << endl;
    cout << sizeof(long long int) << endl;

    for (int i = 0; i <= 10; i++)
    {
        cout << i << " ";
    }

    int age;
    cout << "Enter your age : ";
    cin >> age;

    if (0 > age)
    {
        cout << "not a valid age" << endl;
    }
    else if (age < 18)
    {
        cout << "not adult" << endl;
    }
    else if (18 <= age < 60)
    {
        cout << "adult" << endl;
    }
    else
    {
        cout << "senior" << endl;
    }

    bool isAdult = (age >= 18) ? true : false;
    cout << isAdult << endl;

    int day;
    cout << "Enter num refer to week day : ";
    cin >> day;

    switch (day)
    {
    case 1:
        cout << "Monday" << endl;
        break;

    case 2:
        cout << "Tuesday" << endl;
        break;

    case 3:
        cout << "Wednesday" << endl;
        break;

    case 4:
        cout << "Thursday" << endl;
        break;

    case 5:
        cout << "Friday" << endl;
        break;

    case 6:
        cout << "Saturday" << endl;
        break;

    case 7:
        cout << "Sunday" << endl;
        break;

    default:
        cout << "invalid num" << endl;
    }

    // \n is more preffered thrb endl here because of performance
    int a, b, temp, temp2;
    cout << "Enter number: ";
    cin >> a;
    cout << "Enter number: ";
    cin >> b;
    cout << "Sum of thers two numbers is: " << a + b << endl;

    temp = ++a;
    cout << "pre incriment a = " << temp << endl;
    temp2 = b++;
    cout << "post incriment b = " << temp2 << endl;

    const int pi = 3.14; // we can't make a constant without declearing it
    const float g = 9.8;

    cout << "value of pi = " << pi << "\nvalue of g = " << g << " " << X;
    // symboilic constant and const are two different things

    return 0;
}