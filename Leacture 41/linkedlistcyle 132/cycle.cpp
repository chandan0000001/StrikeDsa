// 132. Linked List Cycle
// EASY
// Solved
// Given head, the head of a linked list, determine if the linked list has a cycle in it.

// There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the next pointer. Internally, pos is used to denote the index of the node that tail's next pointer is connected to. Note that pos is not passed as a parameter.

// Return true if there is a cycle in the linked list. Otherwise, return false.

// Example 1:
// Input: head = [1,2], pos = 0
// Output: true
// Explanation:
// There is a cycle in the linked list, where the tail connects to the 0th node.
// Example 2:
// Example 2 image 1
// Input: head = [1,2,3,4,5], pos = 2
// Output: true
// Explanation:
// There is a cycle in the linked list, where the tail connects to the 2nd node (0-indexed).
// Constraints:
// • The number of nodes in the linked list is in the range [0, 10⁴]
// • -10⁵ ≤ Node value ≤ 10⁵


/*
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

*/

// bool hasCycle(ListNode* head) {
//     if(head == NULL|| head->next==NULL) return 0;
//     ListNode *slow=head,*fast=head->next;
//     while(fast && fast->next && slow!=fast){
//         // slow=slow->next;
//         fast=fast->next->next;
//         slow=slow->next;
//     }
//     if(slow==fast){
//         return 1;
//     }
//     return 0;

// }