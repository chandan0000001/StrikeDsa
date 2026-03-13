// 317. Longest Palindrome
// Given a string s which consists of lowercase or uppercase letters, return the length of the longest palindrome that can be built with those letters.

// Letters are case sensitive, for example, "Aa" is not considered a palindrome.

// Example 1:
// Input: s = "abccccdd"
// Output: 7
// Explanation:
// One longest palindrome that can be built is "dccaccd", whose length is 7.
// Example 2:
// Input: s = "s"
// Output: 1
// Explanation:
// The longest palindrome that can be built is "s", whose length is 1.
// Constraints:
// • 1 <= s.length <= 2000
// • s consists of lowercase and/or uppercase English&nbsp;letters only




// int longestPalindrome(string s) {
//     vector<int> freq(256,0);
// 	for(int i =0;i<s.size();i++){
// 		freq[s[i]]++;
// 	}
// 	 int length=0;
// 	 bool ans=false;
// 	 for(int i=0;i<freq.size();i++){
// 		//for even case
// 		if(freq[i]%2==0){
// 			length+=freq[i];
// 		}
// 		else{
// 			//for odd case
// 			length+=(freq[i]-1);
// 			ans=true;
// 		}
// 	 }
// 	 if(ans==true){
// 		length++;
// 	 }   

// 	 return length;
// }