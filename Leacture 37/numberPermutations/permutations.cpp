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
//    void permutation(vector<int>&nums,int index,int size,vector<vector<int>>&ans){

//         //terminate conditon 
//         if(index==size-1){
//             ans.push_back(nums);
//             return;
//         }
//         for(int i=index;i<size;i++){
//             //intial swap
//             swap(nums[index],nums[i]);
//             //function call
//             permutation(nums,index+1,size,ans);
//             //bcktrack or reset it 
//             swap(nums[index],nums[i]);
//         }
        

//     }
//     vector<vector<int>> permute(vector<int>& nums) {
//         // Code here
//         vector<vector<int>>ans;
//         int index =0;
//         permutation(nums,index,nums.size(),ans);
//         return ans;
//     }
// };