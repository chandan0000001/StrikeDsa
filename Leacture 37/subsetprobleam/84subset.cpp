// 84. Subsets
// MEDIUM

// Given an integer array nums of unique elements, return all possible subsets (the power set).

// The solution set must not contain duplicate subsets. Return the solution in any order.

// Example 1:
// Input: nums = [0]
// Output: [[],[0]]
// Explanation:
// The array has only 1 element.
// We can either:
// Not choose it → []
// Choose it → [0]
// Example 2:
// Input: nums = [1,2,3]
// Output: [[],[1],[1,2],[1,2,3],[1,3],[2],[2,3],[3]]
// Explanation:
// The array has 3 unique elements.
// We generate all possible subsets by choosing or not choosing each element.
// All possible subsets are:
// [] → empty subset (choose nothing)
// [1] → choose only 1
// [2] → choose only 2
// [3] → choose only 3
// [1,2] → choose 1 and 2
// [1,3] → choose 1 and 3
// [2,3] → choose 2 and 3
// [1,2,3] → choose all elements
// Constraints:
// • 1 <= nums.length <= 10
// • -10 <= nums[i] <= 10


// class Solution {
// public:
//     void findSubsets(vector<int>nums,int index,int size,vector<int>&temp,vector<vector<int>> &ans){
//         if(index==size){
//             ans.push_back(temp);
//             return;
//         }
//         findSubsets(nums,index+1,size,temp,ans);
//         temp.push_back(nums[index]);
//         findSubsets(nums,index+1,size,temp,ans);
//         temp.pop_back();
//     }
//     vector<vector<int>> subsets(vector<int>& nums) {
//         // Your code here
//         int n = nums.size();
//       vector<vector<int>>ans;                                                           
//       vector<int>temp;
//       findSubsets(nums,0,n,temp,ans);
//       return ans;
//     }
// };


