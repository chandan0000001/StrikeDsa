// 299. Equal Sums

// You are given an array arr of positive integers. Your task is to find the smallest non-negative integer x (greater than or equal to zero) that can be inserted between any two elements of the array such that the sum of the elements in the subarray before x is equal to the sum of the elements in the subarray after x, with the newly inserted integer x included in either of the two subarrays.

// Your output should be a list of three integers:

//     The smallest non-negative integer x that can be inserted.

//     The position (1-indexed) where x is inserted.

//     A flag indicating whether x was added to the first subarray (1) or the second subarray (2). 

// Example 1:
// Input: arr = [3, 2, 1, 5, 7, 8]
// Output: [4, 5, 1]
// Explanation:
// The smallest possible integer x = 4 can be inserted between 5 and 7, making the subarrays:
// First subarray: [3, 2, 1, 5, 4] with sum = 15.
// Second subarray: [7, 8] with sum = 15.
// x is inserted at position 5 and included in the first subarray.
// Example 2:
// Input: arr = [29, 88, 91, 54, 75, 34]
// Output: [45, 4, 2]
// Explanation:
// The smallest possible integer x = 45 can be inserted between 91 and 54, making the subarrays:
// First subarray: [29, 88, 91] with sum = 208
// Second subarray: [45, 54, 75, 34] with sum = 208
// The sums of both subarrays are equal.
// The minimum value of x is 45, it is inserted at position 4, and it is included in the second subarray, so the flag value is 2.
// Constraints:
// • 2 ≤ arr.size() ≤ 10^6
// • 0 ≤ arr[i] ≤ 10^3





// class Solution {
//     public:
//     vector<int> EqualSum(vector<int> arr) {
//         //Code here
//         int sum =0;int n = arr.size();
//         for(int i=0;i<n;i++){
//             sum+=arr[i];
//         }

//         vector<int>ans(3);
//         ans[0]=INT_MAX;
//         //ans[0]>real answer ans[1]>indexOfElemnet ans<2>leftSum(1),rightsum(2)

//         int leftSum=0;int rightSum=0;

//         for(int i=0;i<n-1;i++){
//             leftSum+=arr[i];
//             rightSum=sum-leftSum;

//             if(abs(leftSum-rightSum)>=ans[0])
//             continue;

//             if(rightSum>leftSum){
//                 ans[0]=rightSum-leftSum;
//                 ans[1]=i+2;
//                 ans[2]=1;
//             }
//             else{ //rightSum<leftSum
//             ans[0]=leftSum-rightSum;
//             ans[1]=i+2;
//             ans[2]=2;
//         }
//     }
// 		return ans;
//   }
// };