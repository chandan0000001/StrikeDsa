// https://www.geeksforgeeks.org/problems/binary-searchable-elements/1

// class Solution
// {
// public:
//     int binarySearchable(vector<int> arr)
//     {

//         int count = 0;
//         int n = arr.size();

//         // For each element check if it can
//         // be found by doing a binary search
//         for (int i = 0; i < n; i++)
//         {

//             // Binary search range
//             int l = 0, r = n - 1;

//             // Do a binary Search
//             while (l <= r)
//             {
//                 int mid = (l + r) / 2;

//                 // Array element found
//                 if (arr[mid] == arr[i])
//                 {
//                     count++;
//                     break;
//                 }
//                 if (arr[mid] < arr[i])
//                 {
//                     l = mid + 1;
//                 }
//                 else
//                 {
//                     r = mid - 1;
//                 }
//             }
//         }

//         return count;
//     }
// };