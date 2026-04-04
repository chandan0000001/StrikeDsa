// 292. Merge Sort
// MEDIUM
// Solved

// Given an array of integers arr, sort the array in ascending order using the Merge Sort algorithm.

// Note : Merge Sort is a divide-and-conquer sorting algorithm that works by repeatedly dividing the list into two halves until each sublist contains only one element. Then, these sublists are merged back together in a sorted manner by comparing elements from each half. This merging process continues until all sublists are combined into a single sorted list.

// Example 1:
// Input: arr = [90, 70, 50, 30, 20, 5]
// Output: [5, 20, 30, 50, 70, 90]
// Example 2:
// Input: arr = [32, -16, 98, -64, 83, -53, 6]
// Output: [-64, -53, -16, 6, 32, 83, 98]
// Constraints:
// • 1 <= arr.length <= 10^5
// • -10^5 <= arr[i] <= 10^5



// class Solution {
// public:
//     void mergeSort(vector<int>& arr) {
//         mergeSortHelper(arr, 0, arr.size() - 1);
//     }

// private:
//     void mergeSortHelper(vector<int>& arr, int start, int end) {
//         if (start >= end) return;

//         int mid = start + (end - start) / 2;

//         // left part
//         mergeSortHelper(arr, start, mid);

//         // right part
//         mergeSortHelper(arr, mid + 1, end);

//         // merge
//         merge(arr, start, mid, end);
//     }

//     void merge(vector<int>& arr, int start, int mid, int end) {
//         vector<int> temp(end - start + 1);

//         int left = start;
//         int right = mid + 1;
//         int index = 0;

//         while (left <= mid && right <= end) {
//             if (arr[left] <= arr[right]) {
//                 temp[index++] = arr[left++];
//             } else {
//                 temp[index++] = arr[right++];
//             }
//         }

//         while (left <= mid) {
//             temp[index++] = arr[left++];
//         }

//         while (right <= end) {
//             temp[index++] = arr[right++];
//         }

//         // copy back
//         for (int i = 0; i < temp.size(); i++) {
//             arr[start + i] = temp[i];
//         }
//     }
// };