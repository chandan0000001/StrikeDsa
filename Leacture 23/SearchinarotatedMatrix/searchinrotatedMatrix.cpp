// You are given an m x n integer matrix with the following two properties:

//     Each row is sorted in non-decreasing order

//     The first integer of each row is greater than the last integer of the previous row

// Given an integer target, return true if target is in matrix or false otherwise.

// Example 1:
// Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 13
// Output: false
// Explanation:
// Search for target value 13 in the matrix.
// Check all elements: 1, 3, 5, 7, 10, 11, 16, 20, 23, 30, 34, 60.
// Value 13 is not found anywhere.
// Return false.
// Example 2:
// Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
// Output: true
// Explanation:
// Search for target value 3 in the matrix.
// Found at row 0, column 1 [1, 3, 5, 7].
// Return true.
// Constraints:
// • 1 <= m, n <= 100 (matrix dimensions)
// • -10^4 <= matrix[i][j], target <= 10^4 (element values and target range)
// • m == matrix.length
// • n == matrix[i].length



// bool searchMatrix(vector<vector<int>>& matrix, int target) {
// 	 if (matrix.empty() || matrix[0].empty()) return false;
// 	int start=0;
// 	int end=matrix.size()*matrix[0].size()-1;
// 	int rowSize=matrix.size();
// 	int colSize=matrix[0].size();
//     while(start<=end){
		
// 		int mid=start+(end-start)/2;
// 		int rowIndex=mid/colSize;
// 		int colIndex=mid%colSize;
// 		if(matrix[rowIndex][colIndex]==target){
// 			return true;
// 		}
// 		else if(matrix[rowIndex][colIndex]<target){
// 			start=mid+1;
// 		}
// 		else{
// 			end=mid-1;
// 		}
// 	}
// 	return false;
// }