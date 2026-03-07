// 301. String Rotated by 2 Places


// Given two strings, word1 and word2. Return true if the string word2 can be obtained by rotating (in any direction) string word1 by exactly 2 places, otherwise, false.

// Note: Both rotations should be performed in the same direction chosen initially.

// Example 1:
// Input: word1 = "amazon", word2 = "azonam"
// Output: true
// Example 2:
// Input: word1 = "dubbmaiq", word2 = "bbmaiqdu"
// Output: true
// Constraints:
// • 1 ≤ word1.length, word2.length ≤ 10^5



// class Solution {
//   public:
//     bool isRotated(string& word1, string& word2) {
//         // code here
// 		int n=word1.size();
//         if (n != word2.size()) return false;
		
// 		bool clockWise=true;
// 		for(int i=0;i<n;i++){
// 			if(word1[i]!=word2[(i+2)%n]){
// 				clockWise=false;
// 				break;
// 			}
// 		}
// 		if(clockWise){
// 			return true;
// 		}
// 		//for anticlockwise
// 		bool antiClockwise=true;
// 		for(int i=0;i<n;i++){
// 			if(word1[(i+2)%n]!=word2[i]){
// 				antiClockwise=false;
// 				break;
// 			}
// 		}
// 		return antiClockwise;
//     }
// };