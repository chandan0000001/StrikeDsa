// 1. Longest Substring Without Repeating Characters


// You are given a string ‎s . Your task is to find the length of the longest substring that contains no repeating characters.

// A substring is a contiguous sequence of characters within the string. You need to determine the maximum possible length among all substrings where every character appears at most once.

// Example 1:
// Input: s = "pwwkew"
// Output: 3
// Explanation:
// The longest substring without repeating characters is "wke", which has a length of 3.
// Note that "pwke" is a subsequence and not a substring.
// Example 2:
// Input: s = "abcabcbb"
// Output: 3
// Explanation:
// The longest substring without repeating characters is "abc", which has a length of 3.
// Note that "bca" and "cab" are also correct answers.
// Constraints:
// • 0 ≤ s.length≤ 5 × 10^4
// • s consists of English letters, digits, symbols and spaces



// int maxUniqueSubstring(string& s) {
//        //code here
// 	int start=0;int end=0;int n=s.size();int answer=0;bool freq[256]={0};
// 	while(end<n){
// 		//this is for checking the element was exist or not 
// 		//kya character current window me already exist karta hai?
		
// 		while(freq[s[end]]){
// 			freq[s[start]]=0;
// 			start++;
// 		}
// 		//now elemt crossed set that value is 1 in the frequenzy array
// 		freq[s[end]]=1;
// 		end++;
// 		answer=max(answer,end-start);
// 	}
// 	return answer;
// }