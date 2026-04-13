// 93. Ways to Sum to N
// MEDIUM

// Given a set of distinct positive integers arr and a value target. Count the total number of ways we can form target by adding the array elements. Repetitions and different arrangements are allowed.

// Example 1:
// Input: arr = [1,5,6], target = 7
// Output: 6
// Explanation:
// The different ways are:
// 1+1+1+1+1+1+1
// 1+1+5
// 1+5+1
// 5+1+1
// 1+6
// 6+1
// Example 2:
// Input: arr = [1,2,3], target = 3
// Output: 4
// Explanation:
// The different ways are:
// 1+1+1
// 1+2
// 2+1
// 3
// Constraints:
// • 1 ≤ arr.length ≤ 100
// • 1 ≤ arr[i] ≤ 100
// • 0 ≤ target ≤ 1000


//this is recurision so TLE is ther 




// class Solution {
// public:
// //here n = size ;
// void  waysToSumn(vector<int>arr,int n,int sum,int target,long long &count){

// //base condition 
// if(sum==target){
//     count++;
//     return;
// }
// if(sum>target){
//     return;
// }
// for(int i=0;i<n;i++){
//         //jitna element utni baar call kareyega 
//     waysToSumn(arr,n,sum+arr[i],target,count);
// }

// }

//     long long countWays(vector<int>&arr, int target) {
//         // Code here
//         long long count = 0;
//         int sum = 0;
//         waysToSumn(arr,arr.size(),sum,target,count);
//         return count;

//     }
// };