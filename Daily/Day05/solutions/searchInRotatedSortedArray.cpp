#include<iostream>
using namespace std;

int search(int* nums , int target , int n){

    int left  = 0;
    int right  = n-1;
   

    while(left<=right){

         int mid = (left+right)/2;

        if(nums[mid] == target){
            return mid;
        } 
        
        // Left half is sorted
        if (nums[left] <= nums[mid]) {
            if (nums[left] <= target && target < nums[mid]) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        // Right half is sorted
        else {
            if (nums[mid] < target && target <= nums[right]) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

    }
    
    return -1;

}


int main(){

    int exarr[] = {10,12,14,16,0,2,4,6};
    int lngt = sizeof(exarr)/sizeof(int);
    int target = 10;

   cout<<"Found at index : "<< search(exarr,target,lngt)<<endl;

    

    return 0;
}