// 94. Combination Sum II
// MEDIUM
// Solved

// Given a collection of candidate numbers (candidates) and a target number (target), find all unique combinations in candidates where the candidate numbers sum to target.

// Each number in candidates may only be used once in the combination.

// Note: The solution set must not contain duplicate combinations.

// Example 1:
// Input: candidates = [2,5,2,1,2], target = 5
// Output: [[1,2,2],[5]]
// Explanation:
// Find all unique combinations where elements sum to target 5 (each element used once):
// -: 1+2+2 = 5 (uses both 2s from array)
// Total unique combinations = 2.
// Example 2:
// Input: candidates = [10,1,2,7,6,1,5], target = 8
// Output: [[1,1,6],[1,2,5],[1,7],[2,6]]
// Explanation:
// Find all unique combinations where elements sum to target 8 (each element can be used only once):
// -: 1+1+6 = 8​
// -: 1+2+5 = 8
// -: 1+7 = 8​
// -: 2+6 = 8
// Constraints:
// • 1 <=&nbsp;candidates.length <= 100
// • 1 <=&nbsp;candidates[i] <= 50
// • 1 <= target <= 30





// void combinationSum(vector<int>& arr,int index,int n,vector<int>path,vector<vector<int>>&ans,int target){

//     if(target==0){
//         ans.push_back(path);
//         return;
//     }
//     if(index==n||target<0){
//         return;
//     }
//     vector<bool>temp(51,0);
//     for(int i=index;i<n;i++){
//         if(!temp[arr[i]]){
//             temp[arr[i]]=1;
//             path.push_back(arr[i]);
//         combinationSum(arr,i+1,n,path,ans,target-arr[i]);
//         path.pop_back();

//         }
//     }
// }
// vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
//     //your code here 
//     vector<vector<int>>ans;
//     vector<int>path;
//     sort(candidates.begin(),candidates.end());
//     combinationSum(candidates,0,candidates.size(),path,ans,target);
//     return ans;
    
// }