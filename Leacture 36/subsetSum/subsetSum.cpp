// 86. Subset Sums
// MEDIUM
// Solved

// Given an array arr[] of integers, return the sums of all possible subsets in any order. The array may contain duplicates, and the empty subset sum is 0. ​

// For an array of size n, there are exactly 2ⁿ possible subsets, each with its own sum.

// Example 1:
// Input: arr = [2,3]
// Output: [0,2,3,5]
// Example 2:
// Input: arr = [5,6,7]
// Output: [0,5,6,7,11,12,13,18]
// Explanation:
// The possible subset sums are 0 (no elements), 5, 6, 7, and their combinations.
// Example 3:
// Input: arr = [1,2,1]
// Output: [0,1,1,2,2,3,3,4]
// Explanation:
// The possible subset sums are 0 (no elements), 1 (either of the 1's), 2 (the element 2), and their combinations
// Constraints:
// • 1 <= arr.size() <= 200
// • 1 <= arr[i] <= 200


// class Solution {
// public:

//     void subSetSum (vector<int> &arr,int index,int n,int sum,vector<int>&ans){
        
//         //end condition 
//          if(index==n){
//             ans.push_back(sum);
//             return;
//          }

//         //age bado sum bhi perform karo 
//         subSetSum(arr,index+1,n,sum+arr[index],ans);
//         //age badhoo but sum ko perform maat karoo 
//         subSetSum(arr,index+1,n,sum,ans);
//     }
//     vector<int> subsetSums(vector<int>& arr) {
//         // Your code here
//     vector<int>ans;
//     subSetSum(arr,0,arr.size(),0,ans);
//     return ans;    
//     }
// };