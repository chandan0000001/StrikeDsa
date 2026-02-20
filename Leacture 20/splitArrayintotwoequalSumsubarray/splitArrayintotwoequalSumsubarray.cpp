// 312. Split Array into Two Equal Sum Subarrays

// Given an integer array nums of size n, return true if the array can be divided into two non-empty contiguous subarrays such that the sum of elements in both subarrays is equal. Otherwise, return false.

// Example 1:
// Input: nums = [1, 2, 3, 4, 5, 5]
// Output: true
// Explanation:
// The array can be divided at index 3.
// The first subarray is [1, 2, 3, 4] with sum 10.
// The second subarray is [5, 5] with sum 10.
// Since both subarrays are non-empty, contiguous, and have equal sums, the answer is true.
// Example 2:
// Input: nums = [2, 3, 1, 5]
// Output: false
// Explanation:
// The total sum of the array is 11, which is odd.
// It is not possible to divide the array into two contiguous subarrays having equal sums.
// Therefore, the answer is false.
// Constraints:
// • 2 <= nums.length <=10^5
// • -10^4 <= nums[i] <= 10^4



// class Solution {
//     public:
//     bool canSplit(vector<int>& nums) {
//         //code here
//         int totalSum=0;int n= nums.size();
//         for(int i=0;i<n;i++){
//             totalSum+=nums[i];
//         }
//         if(totalSum%2!=0){
//             return false;
//         }
//         int target=totalSum/2;
// 		int preFix=0;
// 		for(int k=0;k<n-1;k++){
// 			preFix+=nums[k];
// 			if(preFix==target){
// 				return true;
// 			}
// 		}
// 		return false;
//     }
// };