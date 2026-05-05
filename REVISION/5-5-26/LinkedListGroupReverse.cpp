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

// strikes https://strikes.in/practice/69b2c7ff5c9e0542d6856346



// Leetcode 
// https://leetcode.com/problems/reverse-nodes-in-k-group/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
// class Solution {
// public:
//     ListNode* reverseKGroup(ListNode* head, int k) {
//        if(!head) return NULL;

//         //check hoemany nodes are presesent ther 
//         ListNode *temp = head;
//         int count =0;
//         while(temp && count<k){
//             temp=temp->next;
//             count++;
//         }
//         if(count<k) return head;


//        ListNode *prev = NULL;
//        ListNode *curr = head;
//        ListNode *fut = NULL;

//         count =0;
//        while (curr && count<k){
//         fut=curr->next;
//         curr->next=prev;
//         prev=curr;
//         curr=fut;
//         count++;
//        }
//        if(fut){
//         head->next=reverseKGroup(fut,k);
//        }
//     return prev;
//     }
// };




// GG https://www.geeksforgeeks.org/problems/reverse-a-linked-list-in-groups-of-given-size/1
// /*
// class Node {
//   public:
//     int data;
//     Node* next;

//     Node(int x){
//         data = x;
//         next = NULL;
//     }
// };
// */
// class Solution {
//   public:
//     Node *reverseKGroup(Node *head, int k) {
//         // code here
//         if(!head) return NULL;
//         //Count the number of nodes 
        
//         Node *temp = head;
//         int count =0;
//         // while(temp&&count<k){
//         //     temp=temp->next;
//         //     count++;
//         // }
//         // if(count<k) return head;
        
//         Node *prev = NULL;
//         Node *curr = head;
//         Node *fut = NULL;
//         //reverse logic 
//         //reset count 
//         count =0;
//         while(curr&&count<k){
//             fut=curr->next;
//             curr->next=prev;
//             prev=curr;
//             curr=fut;
//             count++;
//         }
//         //recursion steap
//         if(fut){
//             head->next=reverseKGroup(fut,k);
//         }
//         return prev;
//     }
// };