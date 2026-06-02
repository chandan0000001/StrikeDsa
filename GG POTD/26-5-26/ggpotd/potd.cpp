 // https://www.geeksforgeeks.org/problems/minimum-toogles-to-partition0135/1

// class Solution {
// public:
//     int minToggle(vector<int>& arr) {
//         int n = arr.size();
//         int totalZero = 0;
//         // total zeros count
//         for(int x : arr) {
//             if(x == 0)
//                 totalZero++;
//         }
//         int leftOne = 0;
//         int rightZero = totalZero;
//         int ans = n;
//         for(int i = 0; i < n; i++) {
//             // current element left part me jayega
//             if(arr[i] == 1)
//                 leftOne++;
//             else
//                 rightZero--;

//             ans = min(ans, leftOne + rightZero);
//         }
//         // edge case:
//         // all 0s or all 1s
//         ans = min(ans, min(totalZero, n - totalZero));

//         return ans;
//     }
// };