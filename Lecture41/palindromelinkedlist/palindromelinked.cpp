// 135. Palindrome Linked List
// EASY
// Solved
// Given the head of a singly linked list, return true if it is a palindrome or false otherwise.

// Illustration for Palindrome Linked List
// Example 1:
// Input: head = [5,7,5]
// Output: true
// Explanation:
// In the linked list 5→7→5, reading the elements from both directions gives the same sequence.
// Hence, the linked list is a palindrome, and the output is true.
// Example 2:
// Input: head = [1,2,3,2,1]
// Output: true
// Explanation:
// In the linked list 1→2→3→2→1, reading the elements from both directions gives the same sequence.
// Hence, the linked list is a palindrome, and the output is true.
// Constraints:
// • The number of nodes in the list is in the range [1, 10⁵]
// • 0 ≤ Node.value ≤ 9

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

