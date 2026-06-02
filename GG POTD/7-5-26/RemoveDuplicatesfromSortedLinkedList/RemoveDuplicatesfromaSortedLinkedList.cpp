// Remove Duplicates from a Sorted Linked List
// GG    https://www.geeksforgeeks.org/problems/remove-duplicate-element-from-sorted-linked-list/0
/*
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
};*/

// class Solution {
//   public:
//     Node* removeDuplicates(Node* head) {
//         // code here
//         //handle the base cae 
//         if(!head||!head->next){
//             return head;
//         }
//         Node *curr = head;
//         while(curr&&curr->next){
//             //equal wala case 
//             if(curr->data==curr->next->data){
//                 Node *temp = curr->next;
//                 curr->next=curr->next->next;
//                 delete temp;
//             }else{
//                 //not equal condition 
//                 //curr ko age lee jaoo
//                 curr=curr->next;
//             }
//         }
//         return head;
//     }
// };




// Leetcode 
// https://leetcode.com/problems/remove-duplicates-from-sorted-list/description/
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
//     ListNode* deleteDuplicates(ListNode* head) {
//         //handle base case
//         if(!head || !head->next){
//             return head;
//         }
//         ListNode *curr = head;
//         while(curr&&curr->next){
//             if(curr->val==curr->next->val){
//                 ListNode *temp = curr->next;
//                 curr->next=curr->next->next;
//                 delete temp;
//             }else{
//                 curr=curr->next;
//             }
//         }
//         return head;

//     }
// };


// strikes 
// https://strikes.in/practice/69aeb7465c9e0542d68559b1



/* struct Node {
    int data;
    Node* next;
    Node(int x) : data(x), next(nullptr) {}
}; */

// Node* removeDuplicates(Node* head) {
//     //agar head jinda he ya nahi 
//     if(!head || !head->next){return head;}
//     Node *curr = head;
//     //jab tak curr aur uska next exist kayrenge 
//     while (curr &&curr->next){
//         if(curr->data==curr->next->data){
//             //equal wali condition 
//             Node *temp = curr->next;
//             curr->next=curr->next->next;
//             delete temp;
//         }else{
//             // equal nahi he to agr badhoo 
//             curr=curr->next;
//         }
//     }
//     return head;

// }


