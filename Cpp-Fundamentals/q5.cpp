#include <iostream>
using namespace std;


bool isPrime(int num){

    
    for(int i = 2; i<num;i++){

        if(num%i==0){
    return 0;
    break;
        }

     }

return 1;

}

void printPrime(int num)
{
    for (int i = 2; i <= num; i++)
    {
        if(isPrime(i)){
            cout<< i<<" ";
        }
        
    }
}

int main()
{

    cout << "Enter range from 2 to n : ";
    int n;
    cin >> n;

    printPrime(n);

    return 0;
}