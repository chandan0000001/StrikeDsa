// 75. Climbing Stairs


// You are climbing a staircase with n steps to reach the top. Each time you can climb either 1 or 2 steps. Your task is to calculate the number of distinct ways to climb to the top.

// Example 1:
// Input: n = 3
// Output: 3
// Explanation:
// There are three ways to climb to the top.
// i) 1 step + 1 step + 1 step
// ii) 1 step + 2 steps
// iii) 2 steps + 1 step
// Example 2:
// Input: n = 4
// Output: 5
// Explanation:
// There are two ways to climb to the top.
// i) 1 step + 1 step + 1 step  + 1 step
// ii) 1 step + 1 step + 2 steps
// iii) 1 step  + 2 steps  + 1 step
// iv) 2 steps  + 1 step  + 1 step
// v)  2 steps  + 2 steps
// Constraints:
// • 1 <= n <= 45


//code optimized for recursion only 
// int climbStairs(int n) {
    // Your code here
//     if(n<=2)return n;
//     return climbStairs(n-1)+climbStairs(n-2);
// }