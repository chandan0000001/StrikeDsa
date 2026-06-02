// Sort a linked list of 0s, 1s and 2s
// GG https://www.geeksforgeeks.org/problems/given-a-linked-list-of-0s-1s-and-2s-sort-it/1

/* Node is defined as
  class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/


// class Solution {
//   public:
//     Node* segregate(Node* head) {
//         // code here
//         int zeroCount=0,oneCount=0,twoCount=0;
//         Node *temp = head;
//         //traverse the linked list wit updating the count values 
//         while(temp){
//             if(temp->data==0) zeroCount++;
//             else if(temp->data==1) oneCount++;
//             else if(temp->data==2) twoCount++;
            
//         temp=temp->next;
//         }
//         // reset the temp wit head
//         temp = head;
//         //again do the traverse 
//         while(temp){
//             //kitne 0 bache he 
//             if(zeroCount>0){
//                 temp->data=0;
//                 zeroCount--;
//             }
//             //kitne  1 bache he 
//             else if(oneCount>0){
//                 temp->data=1;
//                 oneCount--;
//             }
//             //kitne 2 bache he 
//             else if(twoCount>0){
//                 temp->data=2;
//                 twoCount--;
//             }
//             //temp ko agee leleoo
//           temp=temp->next;
//         }
//         //head ko return karo 
//         return head;
       
//     }
// };



// Another solution 

// class Solution {
//   public:
//   void insertTail(Node* &tail,Node *curr){
//       tail->next=curr;
//       tail=curr;
//   }
//     Node* segregate(Node* head) {
//         // code here
//         //another process
//         //create dummy nodes 
//         Node* zeroHead = new Node(-1);
//         Node* zeroTail = zeroHead;
//         Node* oneHead = new Node(-1);
//         Node* oneTail = oneHead;
//         Node* twoHead = new Node(-1);
//         Node* twoTail = twoHead;
        
//         //ab karo tum traverse 
//         Node* curr = head;
//         while(curr){
//             int value = curr->data;
//             if (value==0){
//                 insertTail(zeroTail,curr);
//             }
//             else if(value==1){
//                 insertTail(oneTail,curr);
//             }
//             else if(value==2){
//                 insertTail(twoTail,curr);
//             }
//             curr=curr->next;
//         }
//         //now for the merge section 
//         //cover the edge cases 
//         // like onehead ka next agr null nahi he to
//         if(oneHead->next!=NULL){
//             // zero ko one head ke sath attch karo 
//             zeroTail->next=oneHead->next;
//         }else{
//             // zero ko two head ke sath atttach karo kyu ki onehead null he 
//             zeroTail->next=twoHead->next;
//         }
//         //for now defaut case 
//         oneTail->next=twoHead->next;
//         //set after twoNode into the NULL 
//         twoTail->next = NULL;
        
//         //head ko age lo kyu ki wo gayap ho chuka he 
//         head = zeroHead->next;
        
//         //delete the all dummy nodes 
//         delete zeroHead;
//         delete oneHead;
//         delete twoHead;
        
        
//         return head;
        
        
//     }
// };


// Strikes https://strikes.in/practice/68bc5e25148496769dab1380


/* struct Node {
    int data;
    Node* next;
    Node(int x) : data(x), next(nullptr) {}
}; */

// Node* segregate(Node* head) {
//  int zeroCount=0 , oneCount=0 , twoCount=0;
//  //traverse karo linkedlist ko 
//  Node*temp = head;
//  while(temp){
//     if(temp->data==0){
//         zeroCount++;
//     }
//     else if(temp->data==1){
//         oneCount++;
//     }
//     else if(temp->data==2){
//         twoCount++;
//     }
//     temp=temp->next;
//  }
//  //so now reset arrange them all 
// //  reset the head
// temp=head;
//     while(temp){
//         // kitne 0 bache hain
//         if(zeroCount > 0){
//             temp->data=0;
//             zeroCount--;
//         }
//         // kitne 1 bache hain
//         else if(oneCount > 0){
//             temp->data=1;
//             oneCount--;
//         }
//         // kitne 2 bache hain
//         else if(twoCount > 0){
//             temp->data=2;
//             twoCount--;
//         }
//         temp=temp->next;
//     }
//     return head;
// }