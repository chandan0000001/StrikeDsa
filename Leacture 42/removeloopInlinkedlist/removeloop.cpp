// 331. Remove loop in Linked List
// MEDIUM
// Given the head of a singly linked list, the task is to remove a cycle if present. A cycle exists when a node's next pointer points back to a previous node, forming a loop. Internally, a variable pos denotes the index of the node where the cycle starts, but it is not passed as a parameter. The terminal will print true if a cycle is removed otherwise, it will print false.

// Illustration for Remove loop in Linked List
// Example 1:
// Input: LinkedList: 1->8->3->4, pos: 0
// Output: true
// Example 2:
// Input: LinkedList: 1->3->4, pos: 2
// Output: true
// Example 3:
// Input: LinkedList: 1->2->3->4, pos: 1
// Output: true
// Constraints:
// • 1 ≤ number of nodes ≤ 10^5
// • 1 ≤ node->data ≤ 10^4
// • 0 ≤ pos ≤ number of nodes


// void removeLoop(Node* head) {
//     if(!head || !head->next) return;

//     Node *prev = NULL;
//     Node *slow = head;
//     Node *fast = head;

//     // detect loop
//     while(fast && fast->next){
//         prev = slow;
//         slow = slow->next;
//         fast = fast->next->next;
//         if(slow == fast) break;
//     }

//     // no loop
//     if(slow != fast) return;

//     // special case: loop at head
//     if(slow == head){
//         // find last node of loop
//         while(fast->next != head){
//             fast = fast->next;
//         }
//         fast->next = NULL;
//         return;
//     }

//     // reset slow
//     slow = head;

//     //  ab prev ko sahi jagah update kar
//     while(slow != fast){
//         prev = fast;          
//         slow = slow->next;
//         fast = fast->next;
//     }

//     // now prev is last node of loop
//     prev->next = NULL;
// }