// 67. Longest Prefix Suffix


// Given a string s, of lowercase english alphabets, find the length of the longest proper prefix which is also a suffix .
// Note: Prefix and suffix can be overlapping but they should not be equal to the entire string.

// Example 1:
// Input: s = "abab"
// Output: 2
// Explanation:
// Find longest prefix that is also a suffix.
// In "abab", the prefix "ab" matches the suffix "ab".
// Length = 2.
// So k = 2.
// Example 2:
// Input: s = "aabcdaabc"
// Output: 4
// Explanation:
// Find longest prefix that is also a suffix.
// In "aabcdaabc", the prefix "aabc" matches the suffix "aabc".
// Length = 4.
// So k = 4
// Constraints:
// • 1 <= n <= 10⁵ (string length)
// • Return length of the longest substring, not the substring itself
// • If no valid substring with exactly k distinct characters exists, return -1





// int getLPSLength(string& s) {
//     // Your code here
//     int n = s.size();
    
//     vector<int>LPS(n,0);
//     int prefix=0,suffix=1;

//     while(suffix<n){
//         //character matched 
//         if(s[prefix]==s[suffix]){
//         LPS[suffix]=prefix+1;
//         prefix++;suffix++;
//     }
//     else{//if not match 
//         if(prefix==0){
//             suffix++;
//         }
//         else{//lps previous index step
//             prefix=LPS[prefix-1];
//         }
//       }
//     }
    
//     return LPS[n-1];

//     }

//     //tc > O(n)
//     //sp > O(n)