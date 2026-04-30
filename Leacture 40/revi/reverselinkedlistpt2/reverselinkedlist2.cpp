// 136. Reverse Linked List II
// MEDIUM
// You are given the head of a singly linked list and two integers left and right, where left ≤ right. Your task is to reverse the nodes of the list from position left to position right, and return the headof the modified list.

// Positions in the linked list are 1-indexed.

// Illustration for Reverse Linked List II
// Example 1:
// Input: head = [5], left = 1, right = 1
// Output: 5]
// Explanation:
// In the linked list 5, since left = 1 and right = 1, only one node is present, so no change occurs.
// The output remains [5].
// Example 2:
// Input: head = [1,2,3,4,5], left = 2, right = 4
// Output: [1,4,3,2,5]
// Explanation:
// In the linked list 1→2→3→4→5, reversing the nodes from position 2 to 4 gives 1→4→3→2→5.
// The sublist [2,3,4] becomes [4,3,2] after reversal.
// Constraints:
// • The number of nodes in the list is in the range [1, 500]
// • -500 ≤ Node value ≤ 500
// • 1 ≤ left ≤ right ≤ n, where n is the length of the linked list


