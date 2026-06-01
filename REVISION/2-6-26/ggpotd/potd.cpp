// https: // www.geeksforgeeks.org/problems/pairs-with-specific-difference1533/1
       // class Solution
       // {
       // public:
       //     int sumDiffPairs(vector<int> &arr, int k)
       //     {
       //         int n = arr.size();
       //         // Step 1: Sort the array to bring larger elements to the end
       //         sort(arr.begin(), arr.end());
       //         int maxSum = 0;
       //         int i = n - 1; // Start from the largest element

       //         // Step 2 & 3: Scan from right to left greedily
       //         while (i > 0)
       //         {
       //             if (arr[i] - arr[i - 1] < k)
       //             {
       //                 // Found a valid pair, add to sum
       //                 maxSum += arr[i] + arr[i - 1];
       //                 i -= 2; // Consume both elements (disjoint pairs)
       //             }
       //             else
       //             {
       //                 // arr[i] cannot pair with anything to its left
       //                 i -= 1;
       //             }
       //         }
       //         return maxSum;
       //     }
       // };