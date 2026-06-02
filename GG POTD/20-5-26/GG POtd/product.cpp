// https://www.geeksforgeeks.org/problems/equal-to-product3836/1

// class Solution {
// public:
//     bool isProduct(vector<int>& arr, long long target) {
//         unordered_set<long long> seen;
//         for (int x : arr) {
//             // Check if target is divisible by current element to avoid division by zero
//             if (x != 0 && target % x == 0) {
//                 if (seen.find(target / x) != seen.end()) return true;
//             } else if (x == 0 && target == 0) {
//                 // Special case for product with 0
//                 if (!seen.empty()) return true; 
//             }
//             seen.insert(x);
//         }
//         return false;
//     }
// };