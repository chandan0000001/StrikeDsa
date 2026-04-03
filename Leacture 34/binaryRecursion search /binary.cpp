
// 296. Binary Search
// EASY
// Solved

// Given an array of integers nums, which is sorted in ascending order, and an integer target, write a function to search for target in nums. If the target exists, then return its index. Otherwise, return -1.

// Example 1:
// Input: nums = [-1, 0, 3, 5, 9, 12], target = 9
// Output: 4
// Example 2:
// Input: nums = [-1, 0, 3, 5, 9, 12], target = 2
// Output: -1
// Constraints:
// • 1 <= nums.length <= 10^4
// • -10^4 < nums[i], target < 10^4
// • All the integers in nums are unique.
// • nums is sorted in ascending order.





// //recusrion methhod
// int binarySolution(vector<int>& nums,int start,int end, int target){
//     if(start>end){
//         return -1;
//     }
//     int mid = start+(end-start)/2;
//     if(nums[mid]==target){
//         return mid;
//     }
//     else if (nums[mid]>target){
//         return binarySolution(nums,start,mid-1, target);
//     }
//     else{
//         return binarySolution(nums,mid+1,end, target);
//     }
// }


// class Solution {
// public:
//     int search(vector<int>& nums, int target) {
//         // Write your code here
	

//         return binarySolution(nums,0,nums.size()-1, target);
//     }
// };