// 300. Defanging an IP Address
// EASY
// Solved

// Given a valid (IPv4) IP address, return a defanged version of that IP address.

// A defanged IP address replaces every period "." with "[.]".

// Example 1:
// Input: address = "215.63.178.20"
// Output: "215[.]63[.]178[.]20"
// Example 2:
// Input: address = "1.1.1.1"
// Output: "1[.]1[.]1[.]1"
// Constraints:
// • The given address is a valid IPv4 address.




// class Solution {
// public:
//     string defangIPaddr(string address) {
//         //Code here
// 		string ans;
// 		for(int i=0;i<address.size();i++){
// 			if(address[i]=='.'){
// 				ans=ans+"[.]";
// 			}
// 			else{
// 				ans.push_back(address[i]);
// 			}
			
// 		}
// 		return ans;
//     }
// };