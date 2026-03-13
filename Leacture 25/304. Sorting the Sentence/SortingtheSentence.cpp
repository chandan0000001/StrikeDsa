// 304. Sorting the Sentence


// A sentence is a list of words that are separated by a single space with no leading or trailing spaces. Each word consists of lowercase and uppercase English letters.

// A sentence can be shuffled by appending the 1-indexed word position to each word then rearranging the words in the sentence.

//     For example, the sentence "This is a sentence" can be shuffled as "sentence4 a3 is2 This1" or "is2 sentence4 This1 a3".

// Given a shuffled sentence s containing no more than 9 words, reconstruct and return the original sentence.

// Example 1:
// Input: s = "is2 sentence4 This1 a3"
// Output: "This is a sentence"
// Constraints:
// • 2 <= s.length <= 200
// • s consists of lowercase and uppercase English letters, spaces, and digits from 1 to 9.
// • The number of words in s is between 1 and 9
// • The words in s are separated by a single space.
// • s contains no leading or trailing spaces.










// class Solution {
//     public:
//     string sortSentence(string s) {
//         //Code here
// 		vector<string> result(10);
// 		string word="";
// 		int pos=0;
// 		for(int i=0;i<s.size();i++){
// 			//if word doesnot conatin " " space then that character was enter here
// 			if(s[i]!=' '){
// 				word+=s[i];
// 			}
// 			//word character was ended and empty sapce arises so below things will be happen 
// 			if(s[i]==' '||i==s.size()-1){
// 				pos=word.back()-'0'; //store the last things 
// 				word.pop_back();//pop it 
// 				result[pos-1]=word;//given input is 1 based index so while stoing in resule array we need to do -1 so result[pos-1]
// 				word="";//resest the word 
// 			}	
// 		}
// 		string ans="";//>> ""->empty string
// 		for(int i=0;i<result.size();i++){
// 			//traverse over the result 
// 			if(result[i]!=""){
// 				//result encoutered the " "space ignore it 
// 				if(ans!=""){
// 					//if ans variabele having contain the " " then put the space the staring before the statring the letter 
// 					ans+=" ";
// 				}
// 				ans+=result[i];
// 			}
// 		}
// 		return ans;

//     }
// };