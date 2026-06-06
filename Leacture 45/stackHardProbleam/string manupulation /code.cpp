// https://strikes.in/practice/69afaf425c9e0542d6855c19

// // 334. String Manipulation
// // EASY
// // Tom is a string freak. He has got sequences of words arr[] to manipulate. If in a sequence, two same words come together then Tom destroys each other.

// // Find the number of words left in the sequence after this pairwise destruction continues until no such pairs exist.

// // Example 1:
// // Input: ["ab", "aa", "aa", "bcd", "ab"]
// // Output: 3
// // Example 2:
// // Input: ["tom", "jerry", "jerry", "tom"]
// // Output: 0
// // Constraints:
// // • 1 ≤ arr.size() ≤ 10^6
// // • 1 ≤ |arr[i]| ≤ 50

// int countLeft(vector<string> &arr)
// {
//     // Your code here
//     // stack string wala crate karo
//     stack<string> st;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         // agar stack empty he uske anda value dalo
//         if (st.empty())
//         {
//             st.push(arr[i]);
//         }
//         else
//         {
//             // agar  "aa" and "aa"  is taraha value attahe he usse pop karna he
//             if (st.top() == arr[i])
//             {
//                 st.pop();
//             }
//             else
//             {
//                 // stack andar value dalo
//                 st.push(arr[i]);
//             }
//         }
//     }
//     return st.size();
// }