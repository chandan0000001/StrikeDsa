#include<iostream>
#include<vector>
using namespace std;
int main(){
//     given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.
// Return an array of two integers [start index, end index] representing the first and last occurrence of the target in the array. If the target is not found, return [-1, -1].
// Input: nums = [1, 2, 3, 3, 3, 3, 4, 5], target = 3
// Output: [2, 5]
vector<int>arr;
arr = {34,35,123,451,3456,7777,7777,7777,7777,8907};
int n=arr.size();
int target;
cout<<"Enter the value for target: ";
cin>>target;
int start = 0,end=n-1;
//for first occourance
int index1=-1;
while(start<=end){
    int mid=start+(end-start)/2;
    if(arr[mid]==target){
        index1=mid;
        end=mid-1;
        //finished 
    }
    else if(arr[mid]<target){
        //move right side
        start= mid+1;
    }
    else{
        end=mid-1;
    }
}
///for secoond occurance 
int index2=-1;
start =0 ;end=n-1;
while(start<=end){
    int mid=start+(end-start)/2;
    if(arr[mid]==target){
        index2=mid;
        start=mid+1;
    }
    else if(arr[mid]<target){
        //move right side
        start=mid+1;
    }
    else{
        end=mid-1;
    }
}
vector<int>ans;
ans.push_back(index1);
ans.push_back(index2);
// return arr;
cout<<"["<<index1<<" "<<index2<<"]"<<" ";
    return 0;
}