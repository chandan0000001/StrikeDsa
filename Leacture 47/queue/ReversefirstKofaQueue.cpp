// https://strikes.in/practice/69afb2a95c9e0542d6855d44

// // 343. Reverse first K of a Queue
// // EASY
// // Solved
// // Given an integer k and a queue of integers, we need to reverse the order of the first k elements of the queue, leaving the other elements in the same relative order.

// // Only following standard operations are allowed on queue:

// // enqueue(x): Add an item x to rear of queue
// // dequeue(): Remove an item from front of queue
// // size(): Returns number of elements in queue
// // front(): Finds front item
// // Note: The above operations represent the general processings. In-built functions of the respective languages can be used to solve the problem.

// // If the size of the queue is smaller than the given k, then return the original queue.

// // Example 1:
// // Input: q = [4, 3, 2, 1], k = 4
// // Output: [1, 2, 3, 4]
// // Explanation: After reversing the first 4 elements from the given queue the resultant queue will be 1 2 3 4
// // Example 2:
// // Input: q = [1, 2, 3, 4, 5], k = 3
// // Output: [3, 2, 1, 4, 5]
// // Explanation: After reversing the first 3 elements from the given queue the resultant queue will be 3 2 1 4 5
// // Constraints:
// // • 1 ≤ q.size() ≤ 10^5
// // • 1 ≤ k ≤ 10^5
// // • 1 ≤ q[i] ≤ 10^5



// class Solution {
// public:
//     queue<int> modifyQueue(queue<int> q, int k) {
//         // Your code here
//         stack<int>s;
//         //edge case 
//         if(k>q.size()){
//             return q;
//         }
//         for(int i =0;i<k;i++){
//             s.push(q.front());
//             q.pop();
//         }
//         while(!s.empty()){
//             q.push(s.top());
//             s.pop();
//         }
//         int totalElement=q.size()-k;
//         while(totalElement){
//             q.push(q.front());
//             q.pop();
//             totalElement--;
//         }
//         return q;
//     }
// };