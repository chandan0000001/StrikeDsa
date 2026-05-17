// https://www.geeksforgeeks.org/problems/make-the-array-beautiful--170647/1

// #include <vector>
// using namespace std;
// class Solution {
// public:
//     vector<int> makeBeautiful(vector<int> arr) {
//         vector<int> res; // Using a vector as a stack

//         for (int x : arr) {
//             // If the stack is empty, simply push the current element
//             if (res.empty()) {
//                 res.push_back(x);
//             } else {
//                 int top = res.back();
                
//                 // Check if the top element and the current element have opposite signs
//                 // Note: 0 is considered non-negative (>= 0)
//                 if ((top < 0 && x >= 0) || (top >= 0 && x < 0)) {
//                     res.pop_back(); // They cancel each other out, remove from stack
//                 } else {
//                     res.push_back(x); // Same sign group safe to add
//                 }
//             }
//         }
        
//         return res;
//     }
// };
