// // https://www.geeksforgeeks.org/problems/maximum-sum-problem2211/1

// #include <vector>
// #include <algorithm>

// using namespace std;

// class Solution {
// public:
//     int maxSum(int n) {
//         // Base case
//         if (n == 0) return 0;

//         // dp[i] will store the maximum sum obtainable for number i
//         vector<int> dp(n + 1, 0);

//         // Base case for 0 is already 0
//         dp[0] = 0;

//         // Compute maximum sum for all numbers from 1 to n
//         for (int i = 1; i <= n; i++) {
//             // At each step, choose the maximum between:
//             // 1. Not dividing the number at all (i)
//             // 2. Sum of the maximum values of its recursive components (i/2, i/3, i/4)
//             dp[i] = max(i, dp[i / 2] + dp[i / 3] + dp[i / 4]);
//         }

//         return dp[n];
//     }
// };