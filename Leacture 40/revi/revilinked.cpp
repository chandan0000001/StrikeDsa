// 134. Reverse Linked List
// EASY
// Solved
// You are given the headof a singly linked list. Your task is to reverse the linked list and return the head of the reversed list.

// Illustration for Reverse Linked List
// Example 1:
// Input: Linked List = 1->2->3->4->5->NULL
// Output: 5->4->3->2->1->NULL
// Explanation:
// In the linked list 1→2→3→4→5→NULL, reversing the order of links makes 5 the new head, followed by 4, 3, 2, and 1.
// Thus, the reversed linked list is 5→4→3→2→1→NULL.
// Example 2:
// Input: Linked List = 1->2->NULL
// Output: 2->1->NULL
// Explanation:
// In the linked list 1→2→NULL, reversing the links makes the second node (2) point to the first node (1), and the first node’s next pointer becomes NULL.
// Hence, the reversed list becomes 2→1→NULL.
// Constraints:
// • The number of nodes in the list is in the range [0, 5000]
// • -5000 ≤ Node value ≤ 5000








// struct ListNode {
//     int val;
//     ListNode *next;
//     ListNode() : val(0), next(nullptr) {}
//     ListNode(int x) : val(x), next(nullptr) {}
//     ListNode(int x, ListNode *next) : val(x), next(next) {}
// };


// ListNode* reverseList(ListNode* head) {
// ListNode *prev=NULL, *curr=head , *future=NULL;
// while(curr){
//     future = curr->next;
//     curr->next=prev;
//     prev=curr;
//     curr=future;
// }
// head=prev;
// return head;
// }

