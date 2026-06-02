// // https://www.geeksforgeeks.org/problems/elements-in-the-range2834/1

// class Solution {
//   public:
//     bool checkElements(int start, int end, vector<int>& arr) {
//         unordered_set<int> st;
//         for(int x : arr){
//             st.insert(x);
//         }
//         for(int i=start;i<=end;i++){
//             if(st.find(i) == st.end()){
//                 return false;
//             }
//         }
//         return true;
//     }
// };