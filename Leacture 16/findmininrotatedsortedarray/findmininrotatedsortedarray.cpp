// You are given an integer array nums of length n that was originally sorted in strictly increasing order and then rotated between 1 and n times.
// A rotation shifts the array to the right. Rotating the array once moves the last element to the front.
// Example 1:
// Input: nums = [4, 5, 6, 1, 2, 3]
// Output: 1
// Example 2:
// Input: nums = [1, 2, 3, 4, 5, 6, 7]
// Output: 1

//[1, 2, 3, 4, 5]  → rotated →  [4, 5, 1, 2, 3]


#include<iostream>
#include<vector>
using namespace std;
int findMinimumInRotatedSortedArray(const vector<int>& arr){
   
    int start=0,end=(arr.size()-1),ans=arr[0];


     if(arr[0]< arr[end]){
        //handle the base case if array sorted then it return the intital value as a small number 
        return arr[0];
    }

    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]>=arr[0]){
            //move to right side 
            start=mid+1;
        }
        else{
            //move to left side and store that value
            end=mid-1;
            ans=arr[mid];

        }
    }
    return ans;
}
int main(){
vector<int>arr;
arr={6,8,10,12,14,1,2,3,4};
    cout<<findMinimumInRotatedSortedArray(arr);
    cout<<endl;


    return 0;
}