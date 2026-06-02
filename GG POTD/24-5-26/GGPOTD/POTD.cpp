// https://www.geeksforgeeks.org/problems/last-coin-in-a-game-of-alternates/1

// class Solution {
//   public:
  
//     int coin(vector<int>& arr) {
//         int s = 0;
//         int e = arr.size() - 1;
//         while(s < e){
//             if(arr[s] > arr[e]){
//                 s++;
//             }else{
//                 e--;
//             }
//         }
//         return arr[s];
//     }
// };