// Minimum Multiplications to reach End
// https://www.geeksforgeeks.org/problems/minimum-multiplications-to-reach-end/1


// #include <vector>
// #include <queue>
// using namespace std;
// class Solution {
// public:
//     int minSteps(vector<int>& arr, int start, int end) {
//         // If start and end are already the same 0 steps are needed
//         if (start == end) return 0;
//         // The problem explicitly uses modulo 1000
//         int MOD = 1000;
//         // dist array to store the minimum steps to reach each number from 0 to 999
//         // Initialized to -1 to represent unvisited states
//         vector<int> dist(MOD, -1);
//         queue<int> q;
//         // Initialize the starting point
//         q.push(start);
//         dist[start] = 0;
//         while (!q.empty()) {
//             int curr = q.front();
//             q.pop();
//             // Multiply the current number with every element in the array
//             for (int num : arr) {
//                 int next_node = (curr * num) % MOD;
//                 // If this state hasnot been visited yet
//                 if (dist[next_node] == -1) {
//                     dist[next_node] = dist[curr] + 1;
//                     // If we reached the end return the total steps taken
//                     if (next_node == end) {
//                         return dist[next_node];
//                     }           
//                     q.push(next_node);
//                 }
//             }
//         }
//         // If the queue becomes empty and end is never reached
//         return -1;
//     }
// };