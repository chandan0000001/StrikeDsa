// 82. Reverse a String
// EASY
// Solved

// Given a string s, return the reverse of the string. The string may contain any ASCII characters (letters, numbers, special characters, spaces, etc.).

// Example 1:
// Input: s = STrikE
// Output: EkirTS
// Explanation:
// Reverse of STrikE is EkirTS
// Example 2:
// Input: s = CoderArmy
// Output: ymrAredoC
// Explanation:
// Reverse of CoderArmy is ymrAredoC
// Constraints:
// • 1 <= len(s) <= 10⁵
// • String can contain any ASCII printable characters



// recursion type 
// void reverse(string &s,int start,int end){
//     //base condition 
//     if(start>=end){
//         return;
//     }
//     swap(s[start],s[end]);
//      reverse(s,start+1,end-1);
// }
// string reverseString(string &s) {
//     //your code here 

//  reverse(s,0,s.size()-1);
//     return s;
// }