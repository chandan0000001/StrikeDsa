// 305. Add Strings


// Given two non-negative integers, num1 and num2 represented as string, return the sum of num1 and num2 as a string.

// You must solve the problem without using any built-in library for handling large integers (such as BigInteger). You must also not convert the inputs to integers directly.

// Example 1:
// Input: num1 = "9", num2 = "15"
// Output: "24"
// Example 2:
// Input: num1 = "5", num2 = "99"
// Output: "104"
// Constraints:
// • 1 <= num1.length, num2.length <= 10^4
// • num1 and num2 consist of only digits.
// • num1 and num2 don't have any leading zeros except for the zero itself.




// class Solution {
// public:
//     string addStrings(string num1, string num2) {
//         //Code here
// 		int endFirst=num1.size()-1;
// 		int endSecond=num2.size()-1;
// 		int carry=0;
// 		string ans;
// 		while(endFirst>=0||endSecond>=0||carry!=0){
// 			int sum=carry;
// 			if(endFirst>=0){
// 				sum+=num1[endFirst]-'0';
// 				endFirst--;
// 			}
// 			if(endSecond>=0){
// 				sum+=num2[endSecond]-'0';
// 				endSecond--;
// 			}
// 			ans.push_back(sum%10+'0');
// 			carry=(sum/10);
// 		}

// 		//now reverse the string 
// 		reverse(ans.begin(),ans.end());
// 		return ans;

//     }
// };