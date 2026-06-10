// https://strikes.in/practice/69afb2735c9e0542d6855d31


// 342. Queue Reversal
// EASY
// Solved
// Given a queue q containing integer elements, your task is to reverse the queue.
// Your Task:
// You don't need to read input or print anything. Your task is to complete the function reverseQueue() which takes a queue as input and returns the reversed queue.

// Expected Time Complexity: O(n)
// Expected Auxiliary Space: O(n)


// Example 1:
// Input: q = [5, 10, 15, 20, 25]
// Output: [25, 20, 15, 10, 5]
// Example 2:
// Input: q = [1, 2, 3, 4, 5]
// Output: [5, 4, 3, 2, 1]
// Constraints:
// • 1 ≤ q.size() ≤ 10^3
// • 0 ≤ q[i] ≤ 10^5



// queue<int> reverseQueue(queue<int> q) {
//     stack<int>s;
//     while(!q.empty()){
//         s.push(q.front());
//         q.pop();
//     }
//     while(!s.empty()){
//         q.push(s.top());
//         s.pop();
//     }
//     return q;
// }