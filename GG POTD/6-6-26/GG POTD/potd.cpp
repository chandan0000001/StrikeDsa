// // https: // www.geeksforgeeks.org/problems/black-and-white-1587115620/1

// class Solution
// {
// public:
//     long long numOfWays(int n, int m)
//     {
//         long long N = 1LL * n * m;
//         long long total = N * (N - 1);
//         long long attacking = 0;
//         if (n >= 2 && m >= 3)
//             attacking += 4LL * (n - 1) * (m - 2);
//         if (n >= 3 && m >= 2)
//             attacking += 4LL * (n - 2) * (m - 1);
//         return total - attacking;
//     }
// };