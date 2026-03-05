// 55. Rotate a Matrix by 180 Counterclockwise
// MEDIUM
// Solved

// Given a 2D square matrix mat[][]of size n x n, rotate it by 180 degrees without using extra space

// You must rotate the matrix in-place and modify the input matrix directly

// Note: Rotating 180° clockwise or anticlockwise gives the same result.

// Example 1:
// Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
// Output: [[9,8,7],[6,5,4],[3,2,1]]
// Explanation:
// The output matrix is the input matrix rotated by 180 degrees
// Example 2:
// Input: matrix = [[1,2],[3,4]]
// Output: [[4,3],[2,1]]
// Explanation:
// The output matrix is the input matrix rotated by 180 degrees
// Constraints:
// • 1 <= n <= 1000 (size of the matrix)
// • -10^9 <= mat[i][j] <= 10^9 (range of matrix elements)
// • You cannot use extra space for another matrix




// void rotateMatrix(vector<vector<int>>& mat) {
//     int n=mat.size();
// 	for(int k=0;k<n;k++){
// 		reverse(mat[k].begin(),mat[k].end());
// 	}
// 	reverse(mat.begin(),mat.end());
// }