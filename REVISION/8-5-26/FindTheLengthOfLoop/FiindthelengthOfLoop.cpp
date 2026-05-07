// 330. Find length of Loop
//  https://strikes.in/practice/69aebb8e5c9e0542d6855a87
// MEDIUM
// Solved
// Given the head of a linked list, determine whether the list contains a loop. If a loop is present, return the number of nodes in the loop, otherwise return 0.

// Note: pos (1-based index) denotes the position of the node that the tail's next pointer is connected to. If pos = 0, it means the last node points to null (no loop).

// Example 1:
// Input: LinkedList: 1->2->3->4->5, pos: 0
// Output: 0
// Example 2:
// Input: LinkedList: 19->33->10, pos: 1
// Output: 3
// Example 3:
// Input: LinkedList: 25->14->19->33->10, pos: 2
// Output: 4
// Constraints:
// • 1 ≤ number of nodes ≤ 10^5
// • 1 ≤ node->data ≤ 10^4
// • 0 ≤ pos ≤ number of nodes

/* struct Node {
    int data;
    Node* next;
    Node(int x) : data(x), next(nullptr) {}
}; */
//check loop exist os not 

// Node *floydDection(Node*head){
//     if(!head || !head->next){return NULL;}
//     Node *slow=head,*fast = head;
//     while(fast && fast->next){
//         slow=slow->next;
//         fast= fast->next->next;
//         if(slow==fast){
//             return slow;
//         }
//     }
//     return NULL;
// }
// //Determine the first node of the loop 
// Node *getfirstNode(Node *head){
//     if(!head || !head->next){
//         return NULL;
//     }
//     Node *slow = head;
//     Node *pointofIntersection = floydDection(head);
//     //check the loop exist or not 
//     if(!pointofIntersection) {return NULL;}
//     while(slow!=pointofIntersection){
//         slow=slow->next;
//         pointofIntersection=pointofIntersection->next;
//     }
//     return slow;
// }
// int countNodesinLoop(Node* head) {
//     if(!head || !head->next){return 0;}
//     Node *startOfLoop = getfirstNode(head);
//     //check firstNode exist or not
//     if(!startOfLoop) {return 0;}
//     Node *temp = startOfLoop;
//     //1 based index so focous count from 1
//     int count =1;
//     while(temp->next!=startOfLoop){
//         temp = temp->next;
//         count++;
//     }
//     return count;
// }