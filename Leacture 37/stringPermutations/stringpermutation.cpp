// 92. Permutations of a String
// MEDIUM

// Given a string s, which may contain duplicate characters, your task is to generate and return an array of all unique permutations of the string. You can return the answer in any order.

// Example 1:
// Input: s = "A"
// Output: ["A"]
// Example 2:
// Input: s = "ABC"
// Output: ["ABC","ACB","BAC","BCA","CAB","CBA"]
// Explanation:
// Generate all permutations of string "ABC" in lexicographically sorted order:
// Starting with A: "ABC", "ACB"
// Starting with B: "BAC", "BCA"
// Starting with C: "CAB", "CBA"
// Total permutations = 3!
// = 6 permutations
// Constraints:
// • 1 <= s.size() <= 9
// • s contains only Uppercase english alphabets



// //it is based on recursive method 
// void permutationString(string &s,int index,int size,vector<string> &ans){
//     if(index==size-1){
//         ans.push_back(s);
//         return ;
//     }
//     for(int i=index;i<size;i++){
//         swap(s[index],s[i]);
//         permutationString(s,index+1,size,ans);
//         swap(s[index],s[i]);
//     }
// }


// vector<string> findPermutation(string s) {
//     int index = 0;
//     int size = s.size();
//     vector<string> ans;
//     permutationString(s,index,size,ans);
//     return ans;
// }



