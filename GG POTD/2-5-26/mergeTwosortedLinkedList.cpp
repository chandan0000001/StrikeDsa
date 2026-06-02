
// // On strike
// https://strikes.in/practice/68c5920b7ede104f3200757d

// /* struct Node {
//     int data;
//     Node* next;
//     Node(int x) : data(x), next(nullptr) {}
// }; */

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

// }    //ATTACH THE REMAINING NODES
//     if(!head1){
//         Tail->next=head2;
//     }else{
//         Tail->next=head1;
//     }
//     //delete the dummy node 
//     Node *dummy = Head;
//     Head=Head->next;
//     delete dummy;
//     return Head;
// }



// on LEEtcode 
// https://leetcode.com/problems/merge-two-sorted-lists/description/?envType=problem-list-v2&envId=linked-list
// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
// public:
//     ListNode* mergeTwoLists(ListNode* head1, ListNode* head2) {
//         //code 
//         //check if head1 isnot alieve then return head2
//         if(!head1) {return head2;}
//         //vice verssa
//         if(!head2) {return head1;}
//         //create a temp node which is dummy node
//         ListNode *temp = new ListNode(0);
//         //create a tail node which point to the temp node
//         ListNode *tail = temp;
//         while(head1 && head2){
//             if(head1->val <= head2->val){
//                 tail->next=head1;
//                 head1=head1->next;
//                 tail=tail->next;
//                 tail->next=NULL;
//             }
//             else{
//                 tail->next=head2;
//                 head2=head2->next;
//                 tail=tail->next;
//                 tail->next=NULL;
//             }
//         }
//         //if head1 is dead head 2 ke element attach karo (bacha hua )
//         if(!head1){
//             tail->next=head2;
//         }else{
//             tail->next=head1;
//         }
//         //deleting the dummy node 
//         ListNode *head=temp;
//         temp=temp->next;
//         delete head;
//         return temp;
//     }
// };



// on GG https://www.geeksforgeeks.org/problems/merge-two-sorted-linked-lists/1
//

/*
class Node {
 public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

// class Solution {
//   public:
//     Node* sortedMerge(Node* head1, Node* head2) {
//         // code here
//         //create a temp node 
//         Node *temp = new Node(0);
//         //create a tail node which is point to the temp (dummy node)
//         Node *tail = temp;
//         while(head1&&head2){
//             if(head1->data<=head2->data){
//                 tail->next=head1;
//                 head1=head1->next;
//                 tail=tail->next;
//                 tail->next=NULL;
//             }else{
//                 tail->next=head2;
//                 head2=head2->next;
//                 tail=tail->next;
//                 tail->next=NULL;
//             }
           
//         } //if head1 is dead then attach the tail->next with it 
//             if(!head1){
//                 tail->next=head2;
//             }else{
//                 tail->next=head1;
//             }
            
//             //delete the dummy node 
//             Node *head = temp;
//             temp = temp->next;
//             delete head;
//             return temp;
//     }
    
    
    
// };
 