#include <iostream>
using namespace std;

 bool containsDuplicate(int* nums , int n) {
       
        for(int i =0 ; i<n ;i++ ){
            for(int j = i-1; j >= 0 ;j--){
                if(nums[i]==nums[j]){
                    return true;
                }
            }
        }
        return false;
    }

int main(){

     int exarr[] = { 1,3,6,5,3,7,2,0};
     int lngt = sizeof(exarr)/sizeof(int);

     cout<<containsDuplicate(exarr,lngt)<<endl;

    return 0;
}