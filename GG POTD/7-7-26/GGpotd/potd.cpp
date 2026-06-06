// https: // www.geeksforgeeks.org/problems/finding-profession3834/1

// class Solution {
// public:
//     string profession(int level, int pos) {
// //         Engineer -> Engineer Doctor
// //         Doctor   -> Doctor Engineer
//         int flips = __builtin_popcountll(pos - 1);
//         return (flips & 1) ? "Doctor" : "Engineer";
//     }
// };