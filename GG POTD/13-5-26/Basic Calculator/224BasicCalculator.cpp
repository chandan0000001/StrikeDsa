// LeetCode https://leetcode.com/problems/basic-calculator/description/

#include <string>
#include <stack>

using namespace std;

class Solution {
public:
    int calculate(string s) {
        stack<int> st;
        long long result = 0;
        long long number = 0;
        int sign = 1; // 1 for '+', -1 for '-'

        for (int i = 0; i < s.length(); i++) {
            char c = s[i];

            if (isdigit(c)) {
                // Build the number (handles multi-digit integers)
                number = 10 * number + (c - '0');
            } else if (c == '+') {
                result += sign * number;
                number = 0;
                sign = 1;
            } else if (c == '-') {
                result += sign * number;
                number = 0;
                sign = -1;
            } else if (c == '(') {
                // Push current result and sign to save state
                st.push(result);
                st.push(sign);
                // Reset for inner expression
                result = 0;
                sign = 1;
            } else if (c == ')') {
                // Add the last number of the sub-expression
                result += sign * number;
                number = 0;
                // Multiply by the sign before the '('
                result *= st.top(); 
                st.pop();
                // Add the result computed before the '('
                result += st.top(); 
                st.pop();
            }
        }
        
        // Add the final number to the result
        result += sign * number;
        return (int)result;
    }
};





// Strikes > https://strikes.in/practice/68ce64b05de1c342581a97b9

// int calculate(string& s) {
//     stack<int> st;
//     long long result = 0;
//     long long number = 0;
//     int sign = 1; // 1 for +, -1 for -

//     for (int i = 0; i < s.length(); i++) {
//         char c = s[i];

//         if (isdigit(c)) {
//             // Build the number for multi-digit cases
//             number = 10 * number + (c - '0');
//         } else if (c == '+') {
//             result += sign * number;
//             number = 0;
//             sign = 1;
//         } else if (c == '-') {
//             result += sign * number;
//             number = 0;
//             sign = -1;
//         } else if (c == '(') {
//             // Push current result and the sign before the parenthesis
//             st.push((int)result);
//             st.push(sign);
//             // Reset for the expression inside the parenthesis
//             result = 0;
//             sign = 1;
//         } else if (c == ')') {
//             // Add the last number of the sub-expression
//             result += sign * number;
//             number = 0;
//             // Multiply by the sign that was before the (
//             result *= st.top(); 
//             st.pop();
//             // Add the result that was calculated before the (
//             result += st.top(); 
//             st.pop();
//         }
//     }
    
//     // Add the final number to the result
//     result += sign * number;
//     return (int)result;
// }