// 105. Minimum Add to Make Parentheses Valid
// MEDIUM
// Solved
// A parentheses string is valid if and only if:

// It is the empty string,
// It can be written as AB (A concatenated with B), where A and B are valid strings, or
// It can be written as (A), where A is a valid string.
// You are given a parentheses string s.
// In one move, you can insert a parenthesis '(' or ')' at any position in the string.
// Return the minimum number of moves required to make s valid.


// Example 1:
// Input: s = "((("
// Output: 3
// Explanation: Each '(' increases the balance to 3, and since there are no closing brackets, all three '(' remain unmatched. Thus, we need 3 insertions of ')' to balance them, giving a total of 3 moves.
// Example 2:
// Input: s = "())"
// Output: 1
// Explanation: While traversing, the first '(' increases balance to 1, the first ')' decreases it to 0, and the last ')' decreases it to -1, meaning there’s one extra closing bracket. To fix this, we need one '(' insertion at the beginning, giving a total of 1 move.
// Constraints:
// • 1 ≤ s.length ≤ 1000
// • s[i] is either '(' or ')'

// https: // strikes.in/practice/68bed268ddfa7bf5ce4a2361

// int minAddToMakeValid(string s) {
//     //l bracket dikhe to agee badaha lo 
//     //else pe pe chek karo l exist karrta he then usse decrese karoo and r ko badhao 
//     //end p e  l + r  karrke value return karo 
//     int l =0 , r = 0;
//     for(int i=0;i<s.size();i++){
//        if(s[i]=='('){
//            l++;
//        }
//        else{
//            if(l){
//                l--;
//            }else{
//                r++;
//            }
//        }
//     }   
//     return l+r;
//    }