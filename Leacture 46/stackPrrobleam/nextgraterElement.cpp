// https://strikes.in/practice/68bee7a3ddfa7bf5ce4a2421
// 109. Next Greater Element II
// MEDIUM
// You are given an array arr[] of integers.
// The task is to find the next greater element for each element of the array in order of their appearance.

// The next greater element of an element in the array is the nearest element to its right which is greater than the current element.
// If there is no greater element to the right, the next greater element is -1.


// Example 1:
// Input: arr = [5,4,3,1]
// Output: [-1,-1,-1,-1]
// Explanation: In Example 2, arr = [1,3,2,4]:
// For 1, the next greater is 3; for 3, it’s 4; for 2, it’s 4; and for 4, no greater element exists → -1.
// Output → [3, 4, 4, -1].
// Example 2:
// Input: arr = [1,2,3,5]
// Output: [2,3,5,-1]
// Example 3:
// Input: arr = [1,3,2,4]
// Output: [3,4,4,-1]
// Explanation: In Example 3, arr = [1,2,3,5]:
// For 1, next is 2; for 2, next is 3; for 3, next is 5; for 5, none → -1.
// Output → [2, 3, 5, -1].
// Example 4:
// Input: arr = [6,8,0,1,3]
// Output: [8,-1,1,3,-1]
// Explanation: In Example 1, arr = [6,8,0,1,3]:
// For 6, the next greater is 8; for 8, none → -1; for 0, it’s 1; for 1, it’s 3; for 3, none → -1.
// Output → [8, -1, 1, 3, -1].
// Constraints:
// • 1 ≤ T ≤ 100
// • 1 ≤ N ≤ 10⁵
// • 1 ≤ arr[i] ≤ 10⁷