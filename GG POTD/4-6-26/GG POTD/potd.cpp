// // https: // www.geeksforgeeks.org/problems/maximum-difference-of-zeros-and-ones-in-binary-string4111/1

// class Solution
// {
// public:
//     int maxSubstring(string &s)
//     {
//         int curr = 0;
//         int ans = -1;
//         for (char ch : s)
//         {
//             int val = (ch == '0') ? 1 : -1;

//             curr = max(val, curr + val);
//             ans = max(ans, curr);
//         }
//         return ans;
//     }
// };