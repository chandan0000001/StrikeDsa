// https://www.geeksforgeeks.org/problems/check-if-a-string-is-repetition-of-its-substring-of-k-length3302/1


// class Solution {
//     public:
//         bool kSubstr(string &s, int k) {
//             unordered_map<string, int> mp;
//             int blocks = 0;
//             int mx = 0;
//             for (int i = 0; i < s.size(); i += k) {
//                 string part = s.substr(i, k);
//                 mx = max(mx, ++mp[part]);
//                 blocks++;
//             }
//             return (blocks - mx <= 1);
//         }
//     };