// 85. Generate Parentheses
// MEDIUM
// Solved

// Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.

// Example 1:
// Input: n = 2
// Output: ["(())","()()"]
// Explanation:
// All possible valid combinations are:
// "()()" → Two separate valid pairs
// "(())" → One pair inside another (nested)
// Example 2:
// Input: n = 3
// Output: ["((()))","(()())","(())()","()(())","()()()"]
// Explanation:
// All possible valid combinations are:
// "((()))" → All opening brackets first, then all closing brackets
// "(()())" → Nested and sequential combination
// "(())()" → First two pairs nested, last pair separate
// "()(())" → First pair separate, next two nested
// "()()()" → All pairs separate
// Constraints:
// • 1 <= n <= 8


// void paranth(int open,int close,string& temp,vector<string>&ans){
//     //return case 
//     //0 becomes when all open have their close bracket 
//     if(open == 0 && close==0){
//         ans.push_back(temp);
//         return;
//     }
//     //if close biggger it invallid and open cant be negative 
//     if(open>close||open<0){
//         return;
//     }



//     //ek bar '(' issye push karo open ko ghatao 
//     temp.push_back('(');
//     paranth(open-1,close,temp,ans);
//     temp.pop_back();
//     //ek bar ')' issye push karo close ko ghatao 
//     temp.push_back(')');
//     paranth(open,close-1,temp,ans);
//     temp.pop_back();
// }
// vector<string> generateParenthesis(int n) {
//     vector<string>ans;
//     string temp;
//     paranth(n,n,temp,ans);
//     return ans;
// }