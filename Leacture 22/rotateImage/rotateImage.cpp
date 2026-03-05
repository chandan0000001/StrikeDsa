// 54. Rotate Image
// you are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).
// You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. DO NOT allocate another 2D matrix and do the rotation.
// Example 1:
// Input: matrix = [[5,1,9,11],[2,4,8,10],[13,3,6,7],[15,14,12,16]]
// Output: [[15,13,2,5],[14,3,4,1],[12,6,8,9],[16,7,10,11]]
// Explanation:
// Each column from left to right becomes a row from bottom to top.
// Column 0 (5,2,13,15) reversed becomes (top row).
// Column 1 (1,4,3,14) reversed becomes (second row), and so on
// Example 2:
// Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
// Output: [[7,4,1],[8,5,2],[9,6,3]]
// Explanation:
// Column 0 (1,4,7) reversed becomes (top row).
// Column 1 (2,5,8) reversed becomes (middle row).
// Column 2 (3,6,9) reversed becomes (bottom row).
// The leftmost column always becomes the top row when rotated 90 degrees counter-clockwise
// Constraints:
// • n == matrix.length == matrix[i].length (the matrix is square)
// • 1 <= n <= 20 (size of the matrix)
// • -1000 <= matrix[i][j] <= 1000 (range of matrix element values)





// void rotate(vector<vector<int>>& matrix) {
//     //transpose 
// 	int rowSize=matrix.size(),colSize=matrix[0].size();
// 	for(int i=0;i<rowSize;i++){
// 		for(int j=i+1;j<colSize;j++){
// 			swap(matrix[i][j],matrix[j][i]);
// 		}
// 	}

// 	//rotate imgae
	
// 	for(int i=0;i<rowSize;i++){
// 		int colStart=0;int colEnd=matrix[0].size()-1;
// 		while(colStart<colEnd){
// 	swap(matrix[i][colStart],matrix[i][colEnd]);
// 	colStart++;
// 	colEnd--;
	
// 		}
// 	}
		
// }

// void rotate(vector<vector<int>>& matrix) {

//     // transpose
//     int rowSize = matrix.size(), colSize = matrix[0].size();
//     for(int i = 0; i < rowSize; i++){
//         for(int j = i + 1; j < colSize; j++){
//             swap(matrix[i][j], matrix[j][i]);
//         }
//     }

//     // rotate image (reverse rows)
//     for(int i = 0; i < rowSize; i++){
//         int colStart = 0;
//         int colEnd = colSize - 1;

//         while(colStart < colEnd){
//             swap(matrix[i][colStart], matrix[i][colEnd]);
//             colStart++;
//             colEnd--;
//         }
//     }
// }