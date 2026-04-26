// 137. Remove Linked List Elements
// EASY
// Solved
// You are given the headof a singly linked list and an integer val.

// Your task is to remove all the nodes of the linked list that have Node.val == val, and return the headof the updated list.

// Illustration for Remove Linked List Elements
// Example 1:
// Input: head = [1,2,6,3,4,5,6], val = 6
// Output: [1,2,3,4,5]
// Explanation:
// In the linked list [1,2,6,3,4,5,6], all nodes with the value 6 are deleted.
// After removing them, the remaining nodes are [1,2,3,4,5].
// Example 2:
// Input: head = [1,2,3,1,4,2,6,1], val = 1
// Output: [2,3,4,2,6]
// Explanation:
// In this case, the linked list is empty, so there are no nodes to remove.
// The output remains an empty list [].
// Constraints:
// • The number of nodes in the list is in the range [0, 10⁴]
// • 1 ≤ Node value, val ≤ 50




// // Definition for singly-linked list.
// // struct ListNode {
// //     int val;
// //     ListNode *next;
// //     ListNode() : val(0), next(nullptr) {}
// //     ListNode(int x) : val(x), next(nullptr) {}
// //     ListNode(int x, ListNode *next) : val(x), next(next) {}
// // };

// ListNode* remove(ListNode *head , int val){
//     if(!head){
//         return NULL;
//     }
//     head->next=remove(head->next,val);

//     if(head->val==val){
//         ListNode *temp=head->next;
//         delete head;
//         return temp;
//     }
//     return head;
// }
// ListNode* removeElements(ListNode* head, int val) {
    
// return remove(head,val);
// }