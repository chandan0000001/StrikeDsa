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
// //int n = size 
//     void subSets(vector<int>& nums,int n,int index,vector<int>temp,vector<vector<int>>&ans){
//         //base condiotion
//         if(index==n){
//             ans.push_back(temp);
//             return;
//         }
//         //ek wale ko lena he 
//         temp.push_back(nums[index]);
//         subSets(nums,n,index+1,temp,ans);
//         //ek wale ko nahi lena he 
//         temp.pop_back();
//         subSets(nums,n,index+1,temp,ans);
//     }

//     vector<vector<int>> subsets(vector<int>& nums) {
//         // Your code here
//         vector<int>temp;
//         vector<vector<int>>ans;
//         subSets(nums,nums.size(),0,temp,ans);
//         return ans;
//     }
// };


