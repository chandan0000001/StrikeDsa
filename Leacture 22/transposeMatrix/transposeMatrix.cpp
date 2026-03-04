// 48. Transpose of Matrix
// EASY
// Solved

// Given a square matrix of size n x n, find its transpose. The transpose of a matrix is obtained by converting all rows into columns and all columns into rows. Modify the matrix in-place and return it.

// Example 1:
// Input: mat = [[1, 1, 1, 1], [2, 2, 2, 2], [3, 3, 3, 3], [4, 4, 4, 4]]
// Output: [[1, 2, 3, 4], [1, 2, 3, 4], [1, 2, 3, 4], [1, 2, 3, 4]]
// Explanation:
// Converting rows into columns and columns into rows.
// Example 2:
// Input: mat = [[1, 2], [9, -2]]
// Output: [[1, 9], [2, -2]]
// Explanation:
// Converting rows into columns and columns into rows.
// Constraints:
// • 1 ≤ n ≤ 10^3




// vector<vector<int>> transpose(vector<vector<int>>& mat) {
//     int row = mat.size(), col = mat[0].size();

//     vector<vector<int>> ans(col, vector<int>(row));

//     for(int i = 0; i < row; i++){
//         for(int j = 0; j < col; j++){
//             ans[j][i] = mat[i][j];
//         }
//     }

//     return ans;
// }