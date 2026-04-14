// // Hello bro i am busy today 
// 91. Permutations II
// MEDIUM
// Solved

// Given a collection of numbers nums that might contain duplicates, return all possible unique permutations of this array in any order.

// Example 1:
// Input: nums = [1,2,3]
// Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]
// Explanation:
// All elements are distinct, so every permutation is unique.
// Possible permutations:
// Starting with 1 → [1,2,3], [1,3,2]
// Starting with 2 → [2,1,3], [2,3,1]
// Starting with 3 → [3,1,2], [3,2,1]
// Total permutations = 3!
// = 6.
// Example 2:
// Input: nums = [1,1,2]
// Output: [[1,1,2],[1,2,1],[2,1,1]]
// Explanation:
// The array contains duplicate element 1, so some permutations may repeat.
// We must return only unique permutations.
// All possible arrangements:
// Choose first 1 → remaining [1,2]
// [1,1,2]
// [1,2,1]
// Choose second 1 → remaining [1,2]
// Same permutations generated again → ignored (duplicate).
// Choose 2 → remaining [1,1]
// [2,1,1]
// After removing duplicate permutations, the result contains:
// [1,1,2]
// [1,2,1]
// [2,1,1]
// Constraints:
// • 1 <= nums.length <= 8
// • -10 <= nums[i] <= 10




// class Solution {
// public:
// void permutation2(vector<int>&nums,int index,int n,vector<vector<int>>&ans){
//    if(index==n-1){
//     ans.push_back(nums);
//     return;
//    }
//    //in constraints • -10 <= nums[i] <= 10   so 21 elment is there
//    //and all element set to 0 
//       vector<bool>used(21,0);

//     for(int i=index;i<n;i++){
//         if(!used[nums[i]+10]){
//             //+10 used for we are starting i - 0 so we 10 index behind so add 1 
//             used[nums[i]+10]=1;
        
//         swap(nums[i],nums[index]);
//         permutation2(nums,index+1,n,ans);
//         swap(nums[i],nums[index]);
//         }
//     }
// }
//     vector<vector<int>> permuteUnique(vector<int>& nums) {
//         // Code here 
//         vector<vector<int>>ans;
//         permutation2(nums,0,nums.size(),ans);
//         return ans;
//     }
// };