// 99. Check If Circular Linked List
// EASY
// Solved
// Given the head of a singly linked list, return true if the linked list is circular and false if it is not circular.

// A linked list is called circular if it is not NULL terminated and all nodes are connected in the form of a cycle.

// **Note:** The linked list does not contain any inner loop.
// Example 1:
// Input: LinkedList: 1->2->3->1
// Output: true
// Explanation:
// The linked list is circular because the last node (3) points back to the first node (1), creating a cycle.
// Node 1 → Node 2
// Node 2 → Node 3
// Node 3 → Node 1 (creates cycle)
// Since all nodes form a connected cycle with no NULL termination, return true.
// Example 2:
// Input: LinkedList: 1->2->3->4
// Output: false
// Explanation:
// The linked list is NOT circular because the last node (4) points to NULL (not connected back to any previous node).
// Node 1 → Node 2
// Node 2 → Node 3
// Node 3 → Node 4
// Node 4 → NULL (terminates)
// Since the list terminates with NULL, return false.

// /*
// struct ListNode {
//     int data;
//     ListNode* next;
//     ListNode(int x) : data(x), next(nullptr) {}
// };
// */
// bool isCircular(ListNode *head) {
//     if(!head) {return 0;}
//     ListNode *temp = head;
//     while(temp && temp->next!=head){
//         temp=temp->next;
//     }
//     // if(temp==NULL)  and (!temp)  both are same thing 
//     if(!temp){
//         return 0;
//     }
//     return 1;
// }