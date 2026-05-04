// Remove Nth Node From End of Lis  strike  ( https://strikes.in/practice/69a5b4165c9e0542d685508c )

// 324. Remove Nth Node From End of List
// MEDIUM
// Solved
// Given the head of a linked list, remove the nth node from the end of the list and return its head.

// Illustration for Remove Nth Node From End of List
// Example 1:
// Input: head = [1,2,3,4,5], n = 2
// Output: [1,2,3,5]
// Explanation:
// The list has 5 nodes, We need to remove the 2nd node from the end, Counting from the end:
// 1st from end → 5
// 2nd from end → 4
// So we remove node with value 4.
// Original list: 1 → 2 → 3 → 4 → 5
// After removal: 1 → 2 → 3 → 5
// Example 2:
// Input: head = [1,2], n = 1
// Output: [1]
// Explanation:
// The list has 2 nodes, We remove the 1st node from the end, The last node is 2.
// Original list: 1 → 2
// After removal list will be: 1
// Constraints:
// • The number of nodes in the list is sz.
// • 1 ≤ sz ≤ 30
// • 0 ≤ Node.val ≤ 100
// • 1 ≤ n ≤ sz



/**
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

// ListNode* removeNthFromEnd(ListNode* head, int n) {
//     int count =0;
//     ListNode *temp = head;
//     while(temp){
//         count++;
//         temp=temp->next;
//     }
//     count=count-n;
//     //handle the base case 
//     //single element preesent
//     if(count==0){
//         ListNode *dummy = head;
//         head = head->next;
//         delete dummy;
//         return head;
//     }

//     //if more than one node preesent 
//     // create two nodes
//     ListNode *prev = NULL;
//     ListNode *curr = head;
//     while(count--){
//         prev=curr;
//         curr=curr->next;
//     }
//     //curr is now is poinintg to the delteing  node  
//     prev->next=curr->next;
//     delete curr;
//     return head;
// }



GFG ( https://www.geeksforgeeks.org/problems/nth-node-from-end-of-linked-list/1 )

/* struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

// class Solution {
//   public:
//     int getKthFromLast(Node* head, int k) {
//         // code here
//         int count =0 ;
//         Node *dummy = head;
//         //count the all elements 
//         while(dummy){
//             count++;
//              dummy=dummy->next;
             
//         }
//         //if k is more than no. of nodes then return -1
//         if(k>count) {return -1;}
//         // find the position of deleteing element 
//         int pos = count-k;
       
//        Node *curr = head;
//        //reach to the delete elemnt 
//        while(pos--){
//            curr=curr->next;
//        }
//        return curr->data;
//     }
// };


leetCode ( https://leetcode.com/problems/remove-nth-node-from-end-of-list/description/?envType=problem-list-v2&envId=linked-list )    

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
//     ListNode* removeNthFromEnd(ListNode* head, int n) {
//        int count = 0 ;
//        //cout the all elements are present in  the given list 
//        ListNode *temp = head;
//        while(temp){
//         count++;
//         temp=temp->next;
//        }

//         // point the count > last elemnt tlill the count 
//         count = count - n;
//        //edge case if ther only one element present 
//         if(count==0){
//             ListNode *dummy = head;
//             head=head->next;
//             delete dummy;
//             return head;
//         }

//         //for calculate more than one node present 
//         ListNode *curr = head;
//         ListNode *prev = NULL;
//         while(count--){
//             prev=curr;
//             curr=curr->next;
//         }
//         prev->next=curr->next;
//         delete curr;
//         return head;
//     }
// };    