
// 146. Merge Two Sorted Linked Lists
// MEDIUM
// Solved
// Given the head of two sorted linked lists consisting of nodes respectively. Merge both lists and return the head of the sorted merged list.

// Example 1:
// Input: List1: 5->10->15->40, List2: 2->3->20
// Output: 2->3->5->10->15->20->40
// Example 2:
// Input: List1: 1->1, List2: 2->4
// Output: 1->1->2->4
// Constraints:
// • 1 ≤ list1.size, list2.size ≤ 10^3
// • 0 ≤ node->data ≤ 10^5




/* struct Node {
    int data;
    Node* next;
    Node(int x) : data(x), next(nullptr) {}
}; */

// Node* sortedMerge(Node* head1, Node* head2) {
//     if(!head1) return head2;
//     if(!head2) return head1;

//     Node *Head = new Node (0);//this is the dummmy node 
//     Node *Tail = Head;
//     while(head1&&head2){
//     if(head1->data <= head2->data){
//         Tail->next=head1;
//         head1=head1->next;
//         Tail=Tail->next;
//         Tail->next=NULL;
//     }else{
//         Tail->next=head2;
//         head2=head2->next;
//         Tail=Tail->next;
//         Tail->next=NULL;
//     }

//     //ATTACH THE REMAINING NODES
//     if(!head1){
//         Tail->next=head2;
//     }else{
//         Tail->next=head1;
//     }
// }
//     //delete the dummy node 
//     Node *dummy = Head;
//     Head=Head->next;
//     delete dummy;
//     return Head;
// }

 