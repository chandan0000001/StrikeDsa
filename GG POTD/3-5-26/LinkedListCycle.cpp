// LEETCODE   https://leetcode.com/problems/linked-list-cycle/?envType=problem-list-v2&envId=linked-list
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
// class Solution {
// public:
//     bool hasCycle(ListNode *head) 
//     { if(!head || !head->next){return false;}
//        ListNode *slow=head,*fast = head->next;
      
//        while(fast && fast->next){
//         slow=slow->next;
//         fast=fast->next->next;
//         if(slow == fast) {return true;}
//        } 
//        return false;
//     }
// };


// GG  https://www.geeksforgeeks.org/problems/detect-loop-in-linked-list/1

/*
class Node {
   public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
} */

// class Solution {
//   public:
//     bool detectLoop(Node* head) {
//         // code here
//         //base case 
//         if(!head || !head->next) { return false;}
//         Node*slow = head , *fast = head;
//         while(fast && fast->next){
           
//             slow=slow->next;
//             fast=fast->next->next; 
//             if(slow==fast) {return true;}
//         }
//         return false;
//     }
// };




// strikes https://strikes.in/practice/68c2d3de7a37da4267fb97bf    
//revison time 
// bool hasCycle(ListNode* head) {
//     //handle the bse case 
//     if(!head || !head->next) {return 0;}
//     ListNode* slow = head , *fast = head->next;
//     while(fast&&fast->next){ 
//         if(slow==fast){
//         return 1;
//     }   slow = slow->next;
//         fast=fast->next->next;
        
//     }
   
//     return 0;
// }


