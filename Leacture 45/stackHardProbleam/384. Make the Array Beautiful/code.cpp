// // https : // strikes.in/practice/69b92d8e3675dcf973617dde
// 384. Make the Array Beautiful
// EASY
// Solved
// Given an array of negative and non-negative integers. You have to make the array beautiful. An array is beautiful if two adjacent integers, arr[i] and arr[i+1] are either negative or non-negative. And you can do the following operation any number of times until the array becomes beautiful.

// Operation: If two adjacent integers are different i.e. one of them is negative and other is non-negative, remove them.

// Return the beautiful array after performing the above operation.

// Note: An empty array is also a beautiful array. There can be many adjacent integers which are different as stated above. So remove different adjacent integers as described above from left to right.


// Example 1:
// Input: arr = [4,2,-2,1]
// Output: [4,1]
// Explanation: At indices 1 and 2, 2 and -2 have different sign, they are removed. The final array is [4,1].
// Example 2:
// Input: arr = [2,-2,1,-1]
// Output: []
// Explanation: 2 and -2 are removed, then 1 and -1 are also removed. The final array is empty.
// Constraints:
// • 1 ≤ size of the array ≤ 10^5
// • -10^5 ≤ arr[i] ≤ 10^5



//         vector<int> makeBeautiful(vector<int> arr)
// {
//     // write your code here
//     int n = arr.size();
//     // creata a stack
//     stack<int> st;
//     for (int i = 0; i < n; i++)
//     {
//         // agar satack emty hua to uske andar array ka alement dalo
//         if (st.empty())
//         {
//             st.push(arr[i]);
//         }
//         else
//         {
//             // handele negative and positive condition
//             if ((st.top() > 0 && arr[i] < 0) || (st.top() < 0 && arr[i] > 0))
//             {
//                 // element ko hatalo stack se
//                 st.pop();
//             }
//             else
//             {
//                 st.push(arr[i]);
//             }
//         }
//     }
//     // hame array return karna he so ek array leke stack vlue ko array pe dalo after that usse reverse karlo
//     vector<int> ans;
//     while (!st.empty())
//     {
//         ans.push_back(st.top());
//         st.pop();
//     }
//     reverse(ans.begin(), ans.end());
//     return ans;
// }