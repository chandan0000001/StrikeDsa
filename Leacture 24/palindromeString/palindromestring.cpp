// 79. Palindrome String
// EASY
// Solved

// You are given a string s. Your task is to determine if the string is a palindrome. A string is considered a palindrome if it reads the same forwards and backGiven a string s, determine if it is a valid palindrome. A string is a valid palindrome when:

// Return true if s is a valid palindrome, or false otherwisewards.

// Example 1:
// Input: s = abc
// Output: false
// Explanation:
// "abc" does not read the same forwards and backwards, so it is not a palindrome.
// Example 2:
// Input: s = abba
// Output: true
// Explanation:
// "abba" reads the same forwards and backwards, so it is a palindrome.
// Constraints:
// • 1 <= s.length <= 10^6
// • The string&nbsp;s contains only lowercase english letters (a-z)


// bool isPalindrome(string& s) {
//     // Your code here
// 	int start=0;int end=s.size()-1;
// 	while(start<end){
// 		if(s[start]!=s[end]){
// 			return false;
// 		}
// 		start++,end--;

// 	}
// 	return true;
// }