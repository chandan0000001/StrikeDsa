// 49. Spiral Matrix
// MEDIUM
// Solved

// Given an m × n matrix, return all elements of the matrix in spiral order (clockwise, starting from the top-left element).

// Example 1:
// Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
// Output: [1,2,3,6,9,8,7,4,5]
// Example 2:
// Input: matrix = [[1,2,3,4],[5,6,7,8],[9,10,11,12]]
// Output: [1,2,3,4,8,12,11,10,9,5,6,7]
// Constraints:
// • m == matrix.length
// • n == matrix[i].length
// • 1 <= m, n <= 10
// • -100 <= matrix[i][j] <= 100


// vector<int> spiralOrder(vector<vector<int>>& matrix) {
//     vector<int>spiral;
// 	int rowStart=0,colStart=0;
// 	int rowEnd=matrix.size()-1,colEnd=matrix[0].size()-1;

// 	while(rowStart<=rowEnd&&colStart<=colEnd){
// 	//for first row
// 	for(int i=colStart;i<=colEnd;i++){
// 		spiral.push_back(matrix[rowStart][i]);
// 	}
// 	rowStart++;

// 	//for Last col
// 	for(int j=rowStart;j<=rowEnd;j++){
// 		spiral.push_back(matrix[j][colEnd]);
// 	}
// 	colEnd--;



//  if(rowStart<=rowEnd){ 
// 	//for end row reverse 
// 	for(int i=colEnd;i>=colStart;i--){
// 		spiral.push_back(matrix[rowEnd][i]);
// 	}
// 	rowEnd--;
//   }

// 	//for first col reverse
// 	if(colStart <= colEnd){
// 	for(int j=rowEnd;j>=rowStart;j--){
// 		spiral.push_back(matrix[j][colStart]);
// 	}
// 	colStart++;
//    }

//   }
//  return spiral;

// }

