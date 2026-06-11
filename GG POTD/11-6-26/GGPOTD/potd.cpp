// https: // www.geeksforgeeks.org/problems/find-equal-point-in-string-of-brackets2542/1


// class Solution {
//     public:
//         int findIndex(string &s) {
//             int closeCount = 0;
//             for(char ch : s) {
//                 if(ch == ')')
//                     closeCount++;
//             }
//             int openCount = 0;
//             for(int i = 0; i < s.size(); i++) {
//                 if(openCount == closeCount)
//                     return i;
//                 if(s[i] == '(')
//                     openCount++;
//                 else
//                     closeCount--;
//             }
//             return s.size();
//         }
//     };