// 306. Sort Vowels in a String


// Given a 0-indexed string s, permute s to get a new string t such that:

//     All consonants remain in their original places. More formally, if there is an index i with 0 <= i < s.length such that s[i] is a consonant, then t[i] = s[i].

//     The vowels must be sorted in the nondecreasing order of their ASCII values. More formally, for pairs of indices i, j with 0 <= i < j < s.length such that s[i] and s[j] are vowels, then t[i] must not have a higher ASCII value than t[j].

// Return the resulting string.

// The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in lowercase or uppercase. Consonants comprise all letters that are not vowels.

// Example 1:
// Input: s = "strike"
// Output: "streki"
// Example 2:
// Input: s = "IlaAYAPk"
// Output: "AlAIYaPk"
// Constraints:
// • 1 <= s.length <= 10^5
// • s consists only of letters of the&nbsp;English alphabet&nbsp;in uppercase and lowercase.





// bool isVowel(char c){
// 	return(c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U');
// 	}

// class Solution {
// public:
//     string sortVowels(string &s) {
//         //Code here
// 		vector<char> vowel;
// 		for(int i=0;i<s.size();i++){
// 			if(isVowel(s[i])){
// 				vowel.push_back(s[i]);
// 			}
// 		}
// 		sort(vowel.begin(),vowel.end());
// 		int k=0;
// 		for(int i=0;i<s.size();i++){
// 			if(isVowel(s[i])){
// 				s[i]=vowel[k];
// 				k++;
// 			}
// 		}
// 	return s;
//     }
// };