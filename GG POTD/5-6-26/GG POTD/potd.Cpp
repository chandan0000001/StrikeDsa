// https : // www.geeksforgeeks.org/problems/lexicographically-smallest-after-removing-k/1

//         class Solution
// {
// public:
//     bool isPowerOfTwo(int n)
//     {
//         return n > 0 && (n & (n - 1)) == 0;
//     }

//     string lexicographicallySmallest(string &s, int k)
//     {
//         int n = s.size();
//         // Correct k
//         if (isPowerOfTwo(n))
//             k /= 2;
//         else
//             k *= 2;
//         // Not possible
//         if (k >= n)
//             return "-1";
//         vector<char> st;
//         for (char c : s)
//         {
//             while (!st.empty() && k > 0 && st.back() > c)
//             {
//                 st.pop_back();
//                 k--;
//             }
//             st.push_back(c);
//         }
//         // Remove remaining characters from end
//         while (k > 0)
//         {
//             st.pop_back();
//             k--;
//         }
//         string ans(st.begin(), st.end());
//         return ans.empty() ? "-1" : ans;
//     }
// };