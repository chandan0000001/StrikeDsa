// 309. Integer to Roman


// Convert a given integer num to its Roman Numeral representation. The representation uses the symbols {I, V, X, L, C, D, M} with respective values {1, 5, 10, 50, 100, 500, 1000}.

// Conversion Rules:

// Roman numerals are formed by converting the number from highest to lowest place value using the following rules:

//     Standard Conversion

//         If the remaining value does not start with 4 or 9, select the largest Roman symbol less than or equal to the value.

//         Append the symbol to the result and subtract its value.

//         Repeat until the value becomes zero.

//     Subtractive Forms

//         If the value starts with 4 or 9, use subtractive notation.

//         Only the following forms are allowed:

//             IV (4), IX (9)

//             XL (40), XC (90)

//             CD (400), CM (900)

//     Repetition Constraints

//         I, X, C, and M can appear at most three times consecutively.

//         V, L, and D cannot be repeated.

//         Values requiring four repetitions must use subtractive notation.

// Example 1:
// Input: num = 8
// Output: "VIII"
// Example 2:
// Input: num = 19
// Output: "XIX"
// Constraints:
// • 1 ≤ num ≤ 3999




// class Solution {
// public:
//     string intToRoman(int num) {
//         string ans="";
       
//         vector<int> values = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
// vector<string> symbols = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
//        for(int i =0;i<values.size()&&num>0;i++) {
//             while(num >= values[i]) {
//                 ans += symbols[i];
//                 num -= values[i];
//             }
//         }
      
// return ans;
//     }
// };
