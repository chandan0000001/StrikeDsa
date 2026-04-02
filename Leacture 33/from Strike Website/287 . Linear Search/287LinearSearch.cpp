// 287. Linear Search
// EASY
// Solved

// Given an array of integers arr and an integer target, find the index of the first occurrence of target in arr . If the target is not found, return -1.

// Example 1:
// Input: arr = [1, 2, 3, 4, 5], target = 3
// Output: 2
// Explanation:
// 3 is present at 2nd index.
// Example 2:
// Input: arr = [31, 27, 89, 45, 9], target = 31
// Output: 0
// Explanation:
// 31 is present at 0th index.
// Constraints:
// • 1 ≤ arr.size ≤ 10^6
// • 0 ≤ arr[i] ≤ 10^6
// • 0 ≤ target ≤ 10^5


//recusion type
//recusion type 

// int find(vector<int>& arr,int index ,int n,int k){
//     //here n = size of an array;
//     //here k is the target
//     //base condioton
//     if(index==n){
//         return -1;
//     }

// // found target 
//     if(arr[index]==k){
//         return index;
//     }
//     //reverse call for the next index
//     return find(arr,index+1,n,k);
// }
// int linearSearch(vector<int>& arr, int target) {
//     //your code here
//     int n = arr.size();
//     return find(arr,0,n,target);

// }