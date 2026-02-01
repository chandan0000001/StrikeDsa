// 24. Search in Rotated Sorted Array
// You are given a sorted array arr[] of distinct integers that has been rotated at some unknown pivot position, and a target key. Your task is to find and return the index of the target key if it exists in the array; otherwise, return -1.
// The array was originally sorted in ascending order but has been rotated. You need to efficiently search for the target element in this rotated sorted array.
// Example 1:
// Input: arr = [2, 3, 4, 5, 6, 7, 8, 1], key = 1
// Output: 7
// Explanation:
// The key 1 is at index 7 in the array.
// Example 2:
// Input: arr = [100, 200, 300, 400, 10, 20, 30], key = 500
// Output: -1
// Explanation:
// The key 500 is not present in the array.
// Searching returns -1

#include<iostream>
#include<vector>
using namespace std;
  int  SearchinRotatedSortedArray(vector<int>& arr,int key){
    int n=arr.size()-1;
    int left = 0; int right=n; 
    while (left<=right)
    {
        int mid= left+(right-left)/2;
        if(arr[mid]==key){
            return mid;
        }
        //left side sorted 
        else if(arr[left]<=arr[mid]){
            //search in b/w left side
            if(arr[left]<=key&&key<=arr[mid]){//move right pointer to left side bcz there was a element 
                right=mid-1;    
            }else{
                left=mid+1;
            }
        }//right sorted part
        else if(arr[left]>=arr[right]){
            if(arr[mid]<=key && arr[right]>=key){//hover on right part and moving left poinnter to right side 
                left=mid+1;
            }else{
                right=mid-1;
            }
        }
    }
     return -1;
   
  }
int main(){
cout<<"Enter the value you want to see that exist or not: ";
int key;
cin>>key;
vector<int>arr;
arr={2, 3, 4, 5, 6, 7, 8, 1};
cout<<SearchinRotatedSortedArray(arr,key);
cout<<endl;
    return 0;
}