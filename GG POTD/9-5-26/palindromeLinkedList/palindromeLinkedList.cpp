
// GG https://www.geeksforgeeks.org/problems/check-if-linked-list-is-pallindrome/1

/*
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
       data = x;
       next = nullptr;
    }
};*/

// class Solution {
//   public:
//   Node *reverse(Node *head){
//    Node *curr = head;
//    Node *prev = NULL;
//    Node *fut = NULL;
//    while(curr){
//        fut=curr->next;
//        curr->next = prev;
//        prev=curr;
//        curr=fut;
//    }
//    return prev;
//   }
//   Node *getMid(Node *head){
//       Node *slow = head;
//       Node *fast= head->next ;
//       Node *temp = head;
//       while(fast && fast->next){
//           slow=slow->next;
//           fast=fast->next->next;
//       }
//       return slow;
//   }
//     bool isPalindrome(Node *head) {
//         //  code here
//        //handle the base case 
//        if(!head ||!head->next){
//            return true;
//        }
//        //step1 middle nikalo 
//        Node *middle = getMid(head);
       
    
//        //step 2 midlle ke next part se end tak reverse kaeo 
//        Node *temp = middle->next;
//        middle->next = reverse(temp);
       
//        //step 3 dono kw head part ko lo unko reverse karo 
//        Node *head1 = head;
//        Node *head2 = middle->next;
//        while(head2){
//            if(head1->data != head2->data){
//                return false;
//            }
//            head1=head1->next;
//            head2=head2->next;
//        }
//        return true;
//     }
// };




// Strike -->>  https://strikes.in/practice/68c2f9b67a37da4267fb9859

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
// bool isPalindrome(ListNode* head) {
//          if(head==NULL) {return 0;};
//         ListNode *slow=head,*fast = head;
//         while(fast&&fast->next){
//             slow=slow->next;
//             fast=fast->next->next;
//         }
//         //slow is pointing to the mid and now start the reverse process of rest half
//         ListNode* temp1 = slow->next;
//         ListNode *curr=temp1,*prev=NULL,*fut=NULL;
//         while(curr){
//             fut=curr->next;
//             curr->next=prev;
//             prev=curr;
//             curr=fut;
//         }
//         //so half is now revered now for comparision 
//         //1->2->3->4->3->2->1
//         //1->2->3->4 (head is poininging to the 1)  //this is half part and this is another part 3<-2<-1 (prev is poining to the 1)
      
//       ListNode* temp2 = head; 
//       ListNode* temp3 = prev;
//     while(temp3){
//         if(temp2->val!=temp3->val){return 0;};
//         temp2=temp2->next;
//         temp3=temp3->next;
//     }
//     return 1;


// }




// //LEETCODE https://leetcode.com/problems/palindrome-linked-list/description/

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
//     ListNode *getMiddle(ListNode* head){
//         ListNode *slow = head , *fast = head->next;
//         while(fast && fast->next){
//             slow = slow->next;
//             fast = fast->next->next;
//         }
//         return slow;
//     } 
//     ListNode*reverse(ListNode* head){
//         ListNode*curr=head;
//         ListNode *prev=NULL;
//         ListNode *fut=NULL;
//         while(curr){
//             fut=curr->next;
//             curr->next=prev;
//             prev=curr;
//             curr=fut;
//         }
//         return prev;
//     }
//     bool isPalindrome(ListNode* head) {
//         //handle the base case
//         if(!head || !head->next) {return  true;
//                                  }
//         //step 1 middle nikalo 
//         ListNode* middle = getMiddle(head);
//         //step 2 middle se next part se reverse karo
//         ListNode* temp = middle->next;
//         middle->next = reverse(temp);


//         //step 3 comparison karo 
//         ListNode* head1=head;
//         ListNode *head2=middle->next;
    
//     while(head2){
//         if(head1->val!=head2->val){
//             return false;
//         }
//         head1 =head1->next;
//     head2=head2->next;
//     }
//     return  true;
//     }
// };