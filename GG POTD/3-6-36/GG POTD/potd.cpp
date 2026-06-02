// https : // www.geeksforgeeks.org/problems/count-frequency-of-an-element-in-a-given-range/1

//         class Solution
// {
// public:
//     vector<int> freqInRange(vector<int> &arr, vector<vector<int>> &queries)
//     {
//         // Map to store all indices where each element appears
//         unordered_map<int, vector<int>> elementPositions;
//         for (int i = 0; i < arr.size(); ++i)
//         {
//             elementPositions[arr[i]].push_back(i);
//         }
//         vector<int> result;
//         result.reserve(queries.size());
//         // Process each query in O(log N) time
//         for (const auto &query : queries)
//         {
//             int l = query[0];
//             int r = query[1];
//             int x = query[2];
//             // If the element x doesn't exist in the array at all
//             if (elementPositions.find(x) == elementPositions.end())
//             {
//                 result.push_back(0);
//                 continue;
//             }
//             const auto &positions = elementPositions[x];
//             // Find the first index >= l
//             auto startIt = lower_bound(positions.begin(), positions.end(), l);
//             // Find the first index > r
//             auto endIt = upper_bound(positions.begin(), positions.end(), r);
//             // The number of elements in the range is the distance between iterators
//             result.push_back(distance(startIt, endIt));
//         }
//         return result;
//     }
// };