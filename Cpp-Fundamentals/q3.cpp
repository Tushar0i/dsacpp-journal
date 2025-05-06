#include<iostream>
using namespace std;

bool isPrime(int num){

    if(num==1|| num== 0){
        cout<<"Not a prime number";
    return 0;
    }
    for(int i = 2; i<num;i++){

        if(num%i==0){
    cout<<"Not a prime number";
    return 0;
    break;
        }

     }
cout<<"Is a prime number";
return 0;

}

int main(){

    cout<<"Enter a number : ";
    int a;
    cin>> a;

    isPrime(a);



    return 0;
}