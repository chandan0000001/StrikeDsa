// 303. Sort a String


// Given a string s consisting of lowercase letters, arrange all its letters in ascending order. 

// Example 1:
// Input: s = "strike"
// Output: "eikrst"
// Example 2:
// Input: s = "edcab"
// Output: "abcde"
// Constraints:
// • 1 <= s.length <= 10^5
// • S contains only lowercase alphabets.




// string sort(string s) {
//     // Code here
// 	int n=s.size();
// 	int count[26]={0};
// 	for(int i=0;i<n;i++){
// 		count[s[i]-'a']++;
// 	}
// 	string ans;
// 	for(int i=0;i<26;i++){
// 		char c='a'+i;
// 		while(count[i]!=0){
// 			ans.push_back(c);
// 			count[i]--;
// 		}
// 	}
// 	return ans;
// }