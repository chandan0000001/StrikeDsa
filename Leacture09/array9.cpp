#include<iostream>
using namespace std;
int main (){
    cout<<"Hello ";
//     // go gfg Link https://www.geeksforgeeks.org/problems/rotate-array-by-n-elements-1587115621/1
    

//     Rotate array bye one clockwise 
//     class Solution {
//   public:

//     // Function to rotate an array by d elements in counter-clockwise direction.
//     void rotateArr(vector<int>& arr, int d) {
//         // code here
//         int n = arr.size();
//         int temp = arr[n-1];
//         for(int i = (n-2); i >= 0 ; i--){
//             arr[i+1] = arr[i];
//         } 
//         arr[0] = temp; 
//     }
// };


//Solution 2
//class Solution {
//   public:

//     // Function to rotate an array by d elements in counter-clockwise direction.
//     void rotateArr(vector<int>& arr, int d) {
//         // code here
//         int n = arr.size();
//         vector<int>newArr(n);
//         for(int i = 0 ; i < n ; i++){
//             newArr[(i+d)%n] = arr[i];
//         }
//         for(int i = 0 ; i < n ; i++){
//             arr[i] = newArr[i];
//         }
//     }
// };




// solution 3
// class Solution {
//   public:
//     void rotateArr(vector<int>& arr, int d) {

//         int n = arr.size();
//         if (n == 0) return;

//         d = d % n;
//         if (d == 0) return;

//         int i, j, temp;

//         //  reverse first d elements
//         i = 0; 
//         j = d - 1;
//         while (i < j) {
//             temp = arr[i];
//             arr[i] = arr[j];
//             arr[j] = temp;
//             i++; j--;
//         }

//         // reverse remaining n-d elements
//         i = d; 
//         j = n - 1;
//         while (i < j) {
//             temp = arr[i];
//             arr[i] = arr[j];
//             arr[j] = temp;
//             i++; j--;
//         }

//         // reverse whole array
//         i = 0; 
//         j = n - 1;
//         while (i < j) {
//             temp = arr[i];
//             arr[i] = arr[j];
//             arr[j] = temp;
//             i++; j--;
//         }
//     }
// };

// [1 2 3 4 5], d=2
// step1: [2 1 3 4 5]
// step2: [2 1 5 4 3]
// step3: [3 4 5 1 2] done 



    
    return 0;
}