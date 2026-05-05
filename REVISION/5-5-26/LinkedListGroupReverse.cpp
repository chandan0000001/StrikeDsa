// 345. Linked List Group Reverse
// HARD
// Solved
// You are given the head of a Singly linked list. You have to reverse every k nodes in the linked list and return the head of the modified list.

// Note: If the number of nodes is not a multiple of k, then the left-out nodes at the end should be considered as a group and must be reversed as well.

// Example 1:
// Example 1 image 1
// Input: head =[1, 2, 3, 4, 5, 6], k = 2
// Output: [2, 1, 4, 3, 6, 5]
// Explanation:
// Linked List is reversed in a group of size k = 2.
// Example 2:
// Input: head =[1, 2, 3, 4, 5, 6], k = 4
// Output: [4, 3, 2, 1, 6, 5]
// Explanation:
// Linked List is reversed in a group of size k = 4.
// Constraints:
// • 1 ≤ size of linked list ≤ 10^5
// • 0 ≤ node->data ≤ 10^6
// • 1 ≤ k ≤ size of linked list


/*
  Node is defined as
  struct Node
  {
      int data;
      struct Node *next;
      Node(int x){
          data = x;
          next = NULL;
      }
  };
*/

// class Solution {
// public:
//     Node *reverseKGroup(Node *head, int k) {
//         // Your code here
//         //check the head is null then return null;
//         if(!head) return NULL;
//         //reverse logic 
//         Node *prev = NULL;
//         Node *curr = head;
//         Node *fut = NULL;
//         int count = 0;
//         while(curr && count <k){
//             fut=curr->next;
//             curr->next=prev;
//             prev=curr;
//             curr=fut;
//             count++;
//         }
//         //recursion part
//         if(fut){
//             head->next=reverseKGroup(fut,k);
//         }
//         return prev;

//     }
// };

