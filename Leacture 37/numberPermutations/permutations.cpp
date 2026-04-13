// 90. Permutations
// MEDIUM
// Solved

// Given an array nums of distinct integers, return all the possible permutations. You can return the answer in any order.

// Example 1:
// Input: nums = [1,2,3]
// Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]
// Example 2:
// Input: nums = [0,1]
// Output: [[0,1],[1,0]]
// Constraints:
// • 1 <= nums.length <= 6
// • -10 <= nums[i] <= 10
// • All integers in nums are unique

// class Solution {
// public:
// //here n = size 
// void permutations(vector<int>&nums,int index,int n,vector<vector<int>>&ans){
//     //all operation was conduct with n=in one arry so '&' sign with nums used and '&' with ans used for the -> multiple time it store the value so we fix that (for diffeernt function different array created result -> huge space in heap )
//   if(index==n-1){
//     //size n-1 is the end element 
//     ans.push_back(nums);
//     return;
//   }  
//   for(int i = index;i<n;i++){
//     //inttial swap
//     swap(nums[index],nums[i]);
//     //function call and additon beggin until the return case hit 
//     permutations(nums,index+1,n,ans);
//     //this swap use for the restore it and begin to the next step 
//     swap(nums[index],nums[i]);
//   }
// }
//     vector<vector<int>> permute(vector<int>& nums) {
//         // Code here
//         int index = 0;
//         vector<vector<int>>ans;
//         permutations(nums,index,nums.size(),ans);
//         return ans;
//     }
// };