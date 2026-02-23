// 41. Kadane's Algorithm


// You are given an integer array arr[]. Your task is to find the maximum sum of a subarray containing at least one element in arr[].

// Note: A subarray is a continuous part of an array.

// Example 1:
// Input: arr = [2, 3, -8, 7, -1, 2, 3]
// Output: 11
// Explanation:
// The subarray [7, -1, 2, 3] has the largest sum 11.
// Example 2:
// Input: arr = [5, 4, 1, 7, 8]
// Output: 25
// Explanation:
// The subarray [5, 4, 1, 7, 8] has the largest sum 25.
// Constraints:
// • 1 ≤ arr.length ≤ 10^5
// • -10^9 ≤ arr[i] ≤ 10^9\





// int maxSubarraySum(vector<int> &arr) {
//     // Your code here
// 	int n=arr.size();int maxSum=INT_MIN;int subSum=0;
// 	for(int i=0;i<n;i++){
// 	//before element -ve so unke <[pichle walo ke sath bond nahii banunga ]>
// 	if(subSum<0){
// 		subSum=arr[i];
// 	}else{
// 		subSum+=arr[i];
// 	}
// 	maxSum=max(subSum,maxSum);
//   }	
//     return maxSum;
// }