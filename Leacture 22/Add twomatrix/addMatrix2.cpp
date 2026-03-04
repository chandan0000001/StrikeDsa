// 314. Add Two Matrix
// EASY

// You are given two matrices mat1 and mat2. Your task is to add them and return the resultant matrix. If addition is not possible, then return a matrix containing a single element -1 .

// Example 1:
// Input: mat1 = [[1, 2], [3, 4]], mat2 = [[1, 2], [3, 4]]
// Output: [[2, 4], [6, 8]]
// Example 2:
// Input: mat1 = [[1, 1], [1, 1]], mat2 = [[3, 4], [5, 6]]
// Output: [[4, 5], [6, 7]]
// Constraints:
// • 1 ≤ m, n ≤ 200
// • -10^4 <=mat[i] <= 10^4




// vector<vector<int>> addTwoMatrix(vector<vector<int>>& mat1, vector<vector<int>>& mat2) {
//     int row1 = mat1.size(), row2 = mat2.size();
//     int col1 = mat1[0].size(), col2 = mat2[0].size();

//     // handle case where sum is not possible
//     if(row1 != row2 || col1 != col2){
//         vector<vector<int>> ans(1, vector<int>(1));
//         ans[0][0] = -1;
//         return ans;
//     }

//     int rowSize = mat1.size();
//     int colSize = mat1[0].size();

//     vector<vector<int>> ans(rowSize, vector<int>(colSize));

//     for(int i = 0; i < rowSize; i++){
//         for(int j = 0; j < colSize; j++){
//             ans[i][j] = mat1[i][j] + mat2[i][j];
//         }
//     }

//     return ans;
// }