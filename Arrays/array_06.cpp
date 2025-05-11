#include<iostream>
using namespace std;

int main(){

    // array pointer;

    int a[10];
    cout<< a <<"\n";
    int y = 10;
    // a = &y -> we can't do this because array pointer [act lke a constant pointer]

    // pointer arithematic

    int x = 10;
    int* ptr = &x;
    cout<<ptr<<endl;
    ptr++;
    cout<<ptr<<endl;
    int *ptr2 = ptr+4;
    cout<<ptr2<<endl;
    cout<<ptr2-ptr<<endl;
    // cout<<ptr-ptr2<<endl; it is a invalid statement



    return 0;
}