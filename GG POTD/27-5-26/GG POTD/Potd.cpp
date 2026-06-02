// https://www.geeksforgeeks.org/problems/wifi-range--170647/1

// class Solution {
//   public:
//     bool wifiRange(string &s, int x) {
//         int n = s.length();
//         vector<int> cover(n + 1, 0);
//         for(int i=0;i<n;i++){
//             if(s[i] == '1'){
//                 int left = max(0, i - x);
//                 int right = min(n - 1, i + x);
//                 cover[left]++;
//                 if(right + 1 < n){
//                     cover[right + 1]--;
//                 }
//             }
//         }
//         int curr = 0;

//         for(int i=0;i<n;i++){
//             curr += cover[i];
//             if(curr <= 0){
//                 return false;
//             }
//         }
//         return true;
//     }
// };