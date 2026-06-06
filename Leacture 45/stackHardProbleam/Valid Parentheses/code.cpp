// https://strikes.in/practice/68cd6a4f1c84b8baba923015

// // // Opening ko only stack pe dalo close ballo ko matt dallo 
// // 198. Valid Parentheses
// // EASY
// // Solved
// // Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

// // An input string is valid if:

// // Open brackets must be closed by the same type of brackets.
// // Open brackets must be closed in the correct order.
// // Every close bracket has a corresponding open bracket of the same type.

// // Example 1:
// // Input: s = "()[]{}"
// // Output: true
// // Example 2:
// // Input: s = "([)]"
// // Output: false
// // Constraints:
// // • 1 <= s.length <= 10^4
// // // • s consists of parentheses only '()[]{}'.



// bool isValid(string& str) {
//     // 🤣
//     stack<char>st;
//     for(int i=0 ;i<str.size();i++){
//         if(st.empty()||str[i]=='('||str[i]=='{'||str[i]=='['){
//             if(str[i]=='('){
//                 st.push(')');
//                 }
//                else if(str[i]=='{'){
//                 st.push('}');
//                 }
//                 else if(str[i]=='['){
//                     st.push(']');
//              }
//             else {
//                 return 0;
//             }
//         }
//         else{
//             if(st.top()==str[i]){
//                 st.pop();
//             }
//             else{
//                 return 0;
//             }
//         }
//     }
//     return st.empty();
// }