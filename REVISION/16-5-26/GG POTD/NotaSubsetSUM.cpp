// https://www.geeksforgeeks.org/problems/smallest-number-subset1220/1

// class Solution {
//   public:
//     int findSmallest(vector<int> &arr) {
//         // code here.
//         sort(arr.begin(),arr.end());
//         long long res = 1;
//         for(int i= 0;i<arr.size();i++){
//             if(arr[i]>res){
//                 break;
//             }
//             res=res+arr[i];
//         }
//         return res;
//     }
// };