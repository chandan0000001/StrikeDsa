// //LEETCODE   https://leetcode.com/problems/reverse-linked-list/

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
// ListNode *reverseHead(ListNode *head){
//     //handle the base case
//     if(!head||!head->next){
//         return head;
//     }
//     ListNode *subHead=reverseHead(head->next);
//     head->next->next=head;
//     head->next=NULL;
//     return subHead;

// }
//     ListNode* reverseList(ListNode* head) {
//         return reverseHead(head);
//     }
// };


// // GG  https://www.geeksforgeeks.org/problems/reverse-a-linked-list/1

// /*
// class Node {
//  public:
//     int data ;
//     Node *next ;

//     Node(int x) {
//         data = x ;
//         next = nullptr ;
//     }
// };
// */
// class Solution {
//   public:
//   Node *reverseNode(Node* head){
//       //agara head null ke bara bar he agar head ka next null ke bara bar he yani ek hi node preesent he 
//       if(!head||!head->next){
//           return head;
//       }
//       //handle one condition then recursion will manage anything 
//       Node* head1=reverseNode(head->next);
//       //head pointer move karo head ke next ke next ko and then head ke next ko null ko point karaoo 
//       head->next->next=head;
//       head->next=NULL;
//       return head1;
//   }
//     Node* reverseList(Node* head) {
//         // code here
//         return reverseNode(head);
//     }
// };


// // STRIKE   https://strikes.in/practice/68c2f0ba7a37da4267fb9835

// // struct ListNode {
// //     int val;
// //     ListNode *next;
// //     ListNode() : val(0), next(nullptr) {}
// //     ListNode(int x) : val(x), next(nullptr) {}
// //     ListNode(int x, ListNode *next) : val(x), next(next) {}
// // };

// ListNode* reverseNode(ListNode *head){
//     //handle the base case 
//     if(!head||!head->next){
//         return head;
//     }
//     ListNode* head1=reverseNode(head->next);
//     head->next->next=head;
//     head->next=NULL;
//     return head1;
//  }
// ListNode* reverseList(ListNode* head) {
//   return reverseNode(head);
// }
