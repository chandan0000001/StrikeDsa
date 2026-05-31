// https : // www.geeksforgeeks.org/problems/maximum-product-subset-of-an-array/1

//         // class Solution {
//         // public:
//         //     long long MOD = 1000000007;
//         //     int findMaxProduct(vector<int>& arr) {
//         //         int n = arr.size();
//         //         if(n == 1){
//         //             return arr[0];
//         //         }
//         //         long long prod = 1;
//         //         int negCount = 0;
//         //         int zeroCount = 0;
//         //         int maxNegative = -11;
//         //         for(int x : arr){
//         //             if(x == 0){
//         //                 zeroCount++;
//         //                 continue;
//         //             }
//         //             if(x < 0){
//         //                 negCount++;
//         //                 maxNegative = max(maxNegative, x);
//         //             }
//         //             prod *= x;
//         //         }
//         //         if(zeroCount == n){
//         //             return 0;
//         //         }
//         //         // only one negative and all others zero
//         //         if(negCount == 1 && zeroCount + negCount == n){
//         //             return 0;
//         //         }
//         //         if(negCount & 1){
//         //             prod /= maxNegative;
//         //         }
//         //         prod %= MOD;
//         //         if(prod < 0){
//         //             prod += MOD;
//         //         }
//         //         return (int)prod;
//         //     }
//         // };

//         class Solution
// {
// public:
//     long long findMaxProduct(vector<int> &arr)
//     {
//         int n = arr.size();
//         if (n == 1)
//             return arr[0];

//         long long MOD = 1e9 + 7;
//         long long prod = 1;
//         int negCount = 0;
//         int zeroCount = 0;
//         int maxNegative = INT_MIN;
//         bool productCalculated = false;
//         for (int x : arr)
//         {
//             if (x == 0)
//             {
//                 zeroCount++;
//                 continue;
//             }
//             if (x < 0)
//             {
//                 negCount++;
//                 maxNegative = max(maxNegative, x);
//             }
//             prod = (prod * x) % MOD;
//             productCalculated = true;
//         }
//         // Handle case where all elements are zeros
//         if (zeroCount == n)
//             return 0;
//         // If negative count is odd, exclude the largest negative (closest to 0)
//         if (negCount % 2 != 0)
//         {
//             // If only one negative number and remaining are zeros
//             if (negCount == 1 && (negCount + zeroCount == n))
//                 return 0;
//             prod = (prod / maxNegative) % MOD;
//         }
//         // Adjust for negative modulo result
//         if (prod < 0)
//             prod += MOD;
//         return prod;
//     }
// };