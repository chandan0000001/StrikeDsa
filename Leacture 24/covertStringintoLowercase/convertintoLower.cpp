// 81. Convert String to LowerCase
// Given a string s, convert all uppercase characters to lowercase. Lowercase characters remain unchanged.

// Example 1:
// Input: s = LMNOppQQ
// Output: lmnoppqq
// Example 2:
// Input: s = ABCddE
// Output: abcdde
// Constraints:
// • 1 <= s.length <= 10⁵


// string toLower(string &s) {
//     // Your code here
// 	for(int i=0;i<s.size();i++){
// 		if(s[i]>='A'&&s[i]<='Z'){
// 			s[i]=(s[i]-'A')+'a';
// 		}
// 	}
// 	return s;
// }