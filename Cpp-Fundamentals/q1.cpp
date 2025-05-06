#include<iostream>
using namespace std;

int main(){

    
    int sum = 0;

    int a = 1098453;
    int lastDig;
    while(a>0){

        lastDig =a%10;

        sum += lastDig;
        a/=10;
    }
    cout<<"Sum is : "<<sum;


    return 0;
}