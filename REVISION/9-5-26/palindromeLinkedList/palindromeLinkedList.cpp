
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




