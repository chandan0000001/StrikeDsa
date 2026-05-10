// https://www.geeksforgeeks.org/problems/palindrome-pairs/1


// class Solution {
// public:
//     // Helper function to check if a string is a palindrome
//     bool isPalindrome(const string& s) {
//         int left = 0, right = s.length() - 1;
//         while (left < right) {
//             if (s[left++] != s[right--]) return false;
//         }
//         return true;
//     }

//     bool palindromePair(vector<string>& arr) {
//         int n = arr.size();
//         if (n < 2) return false;

//         // Store all strings in a map for O(1) lookups: {string, index}
//         unordered_map<string, int> mp;
//         for (int i = 0; i < n; i++) {
//             mp[arr[i]] = i;
//         }

//         for (int i = 0; i < n; i++) {
//             string s = arr[i];
//             int len = s.length();

//             // Try karo splitting the string at every possible position j
//             for (int j = 0; j <= len; j++) {
//                 string left = s.substr(0, j);
//                 string right = s.substr(j);

//                 // Case a If left part is a palindrome check if reverse of right exists
//                 if (isPalindrome(left)) {
//                     string rev_right = right;
//                     reverse(rev_right.begin(), rev_right.end());
                    
//                     if (mp.count(rev_right) && mp[rev_right] != i) {
//                         return true; // Found a pair (rev_right + left + right)
//                     }
//                 }

//                 // Case b If right part is a palindrome check if reverse of left exists
//                 // We check j < len to avoid double-counting the j=0 case
//                 if (j < len && isPalindrome(right)) {
//                     string rev_left = left;
//                     reverse(rev_left.begin(), rev_left.end());
                    
//                     if (mp.count(rev_left) && mp[rev_left] != i) {
//                         return true; // Found a pair (left + right + rev_left)
//                     }
//                 }
//             }
//         }

//         return false;
//     }
// };