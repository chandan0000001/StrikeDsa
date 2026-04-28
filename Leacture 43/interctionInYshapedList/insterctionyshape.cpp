// 332. Intersection in Y Shaped Lists
// MEDIUM
// Solved
// You are given the heads of two non-empty singly linked lists, head1 and head2, that intersect at a certain point.

// Return that Node where these two linked lists intersect.

// Note: The input is provided in three parts: the unique part of List 1, the unique part of List 2, and the Common part where they merge. It is guaranteed that the intersected node always exists.

// Illustration for Intersection in Y Shaped Lists
// Example 1:
// Input: List1: 4, List2: 5->6, Common: 1->8->5
// Output: 1
// Example 2:
// Input: List1: 10, List2: 3->6->9, Common: 15->30
// Output: 15
// Constraints:
// • 2 ≤ total number of nodes ≤ 2*10^5
// • -10^4 ≤ node->data ≤ 10^4



// /* struct Node {
//     int data;
//     Node* next;
//     Node(int x) : data(x), next(nullptr) {}
// }; */

// Node* intersectPoint(Node* head1, Node* head2) {
//     Node *slow = head1,*fast=head1,*curr=head1;
//     //create a loop 
//     while(curr->next){
//         curr=curr->next;
//     }
//     curr->next=head2;
//     //slow and fst pointer concept
//     while(fast&&fast->next){
//         slow=slow->next;
//         fast=fast->next->next;
//         if(slow==fast){
//             break;
//         }
//     }
//     //loop was dected 
//     //reset the slow 
//     slow=head1;
//     while(slow!=fast){
//         slow=slow->next;
//         fast=fast->next;
//     }
//     return fast;
// }