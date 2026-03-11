// 308. Factorials of large numbers


// Given an integer num , find its factorial. Return a array of integers denoting the digits that make up the factorial of n.

// Constraints:

//     1 ≤ num ≤ 103

// Example 1:
// Input: num = 5
// Output: [1, 2, 0]
// Example 2:
// Input: num = 4
// Output: [2, 4]







// class Solution {
//   public:
//     vector<int> factorial(int num) {
//         // code here
// 		vector<int>res;
// 		res.push_back(1);

// 		while(num>1){
// 			int carry=0;
// 		    for(int i=0;i<res.size();i++){
// 				int prdt = num*res[i]+carry;
// 				res[i]=prdt%10;//store last digit
// 				carry=prdt/10;//update the carry value 
// 			}

// 			//rest cary was resolved 
// 			while(carry){
// 				res.push_back(carry%10);//last didgit of carry was stored
// 				carry/=10;//to element the last digit 
// 			}
// 			num--;
// 		}
// 		reverse(res.begin(),res.end());
// 		return res;
//     }
// };