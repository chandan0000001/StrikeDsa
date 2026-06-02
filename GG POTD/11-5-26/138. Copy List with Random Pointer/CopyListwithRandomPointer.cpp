// // LEETCODE ->> https://leetcode.com/problems/copy-list-with-random-pointer/description/


// /*
// // Definition for a Node.
// class Node {
// public:
//     int val;
//     Node* next;
//     Node* random;
    
//     Node(int _val) {
//         val = _val;
//         next = NULL;
//         random = NULL;
//     }
// };
// */

// class Solution {
// public:
//     void insertTail(Node* &head,Node* &tail, int data){
//         Node *newNode = new Node(data);
//         if(head==NULL){
//             head = newNode;
//             tail = newNode;
//             return;
//         }else{
//             tail->next = newNode;
//             tail=tail->next;
//         }
//     }
//     Node* copyRandomList(Node* head) {
//         //Stewp 1 create a copy of the given lsit
//        Node* cloneHead = NULL;
//         Node *cloneTail = NULL;
//         Node *temp = head;
//         while(temp){
//             insertTail(cloneHead,cloneTail,temp->val);
//                 temp = temp->next;
            
//         }

//         //step 2 clone added in the orginal likedlist
//         Node *orginalNode = head; Node *cloneNode = cloneHead;
//         while(orginalNode &&cloneNode){
//             Node *tempx = orginalNode->next;
//             orginalNode->next=cloneNode;
//             orginalNode = tempx;

//             tempx = cloneNode->next;
//             cloneNode->next=orginalNode;
//             cloneNode = tempx;
//         }
//         //step 3 random pointer add karo 
//         temp = head;
//         while(temp){
//             if(temp->next){
//                 if(temp->random){
//                       temp->next->random=temp->random->next;
//                 }        
//             }
//             temp=temp->next->next;
//         }
//         //step 4 process the restoing the all 
//         orginalNode=head;
//         cloneNode = cloneHead;
//         while(orginalNode && cloneNode){
//             orginalNode -> next = cloneNode->next;
//             orginalNode=orginalNode->next;
//             if(orginalNode){
//             cloneNode->next=orginalNode->next;
            
//             }
//             cloneNode=cloneNode->next;
//         }
//         return cloneHead;
//     }
// };




// // GFG   > https://www.geeksforgeeks.org/problems/clone-a-linked-list-with-next-and-random-pointer/1


// /*
// class Node {
//   public:
//     int data;
//     Node* next;
//     Node* random;

//     Node(int x) {
//         data = x;
//         next = NULL;
//         random = NULL;
//     }
// };
// */

// class Solution {
//   public:
//   void insertTail(Node* &cloneHead , Node* &cloneTail , int data){
//       Node* newNode = new Node(data);
//       if(cloneHead==NULL){
//           cloneHead=newNode;
//           cloneTail=newNode;
//           return;
//       }
//       cloneTail->next = newNode;
//       cloneTail=cloneTail->next;
//   }
//     Node* cloneLinkedList(Node* head) {
//         // code here
//         //step 1 copy create karo given list ka 
//         Node* cloneHead = NULL;
//         Node* cloneTail = NULL;
//         Node* temp = head;
//         while(temp){
//             //element insters karo 
//             insertTail(cloneHead,cloneTail,temp->data);
//             temp=temp->next;
//         }
//         //step 2 add karo copy wale nodes ko orginal lsit pe
//         Node* orginalList = head; Node* cloneList = cloneHead;
//         temp = head;
//         while(orginalList && cloneList){
//             //fixing orginal List
//             Node *tempx = orginalList->next;
//             orginalList->next=cloneList;
//             orginalList=tempx;
            
//             //fixing cloneList
//             tempx = cloneList->next;
//             cloneList->next=orginalList;
//             cloneList = tempx;
//         }

//         //step 3 random pointer add karo 
//         temp = head;
//         while(temp){
//             if(temp->next)
//                 if(temp->random)
//                     temp->next->random=temp->random->next;
//         temp=temp->next->next;                    
//         }
//         //step 4 restore karo sare chiizee 
//         Node *orginalRestore = head;
//         Node *cloneRestore  = cloneHead;
//         while(orginalRestore && cloneRestore){
//             orginalRestore->next=cloneRestore->next;
//             orginalRestore = orginalRestore->next;
//             if(orginalRestore){
//                 cloneRestore->next=orginalRestore->next;
//             }
//             cloneRestore=cloneRestore->next;
//         }
        
//         return cloneHead;
//     }
// };






// // STRIKE >> https://strikes.in/practice/69b2d9b65c9e0542d68563f6



// void insertelement(Node* &chead,Node* &ctail,int data){
//     Node* newNode = new Node(data);
//     if(chead==NULL){
//         chead=newNode;
//         ctail=newNode;
//         return;
//     }
//     //ctail ke next pe node add karo aur usse age lo 
//     ctail->next=newNode;
//     ctail=ctail->next;
// }

// Node* cloneLinkedList(Node* head) {
//     //step 1 copy karo sare element ko 
//     Node *chead=NULL;
//     Node *ctail=NULL;
//     Node *temp = head;
//     while(temp){
//         insertelement(chead,ctail,temp->data);
//         temp=temp->next;
//     }
//     //step 2 clone List banao usko orginal list pe dalo 
//     Node* orginalList = head; Node* cloneList = chead;
//     while(orginalList && cloneList){
//         temp = orginalList->next;
//         orginalList->next=cloneList;
//         orginalList=temp;

//         temp=cloneList->next;
//         cloneList->next=orginalList;
//         cloneList=temp;
//     }
//     //step 3 intigrate the random element 
//     temp=head;
//     while(temp){
//         if(temp->next)
//             if(temp->random)
//                 temp->next->random=temp->random->next; 
//     //double jump karna he                 
//     temp=temp->next->next;                
//     }
//     //step 4 rearrnage the all   fiHead mens final head ..
//     Node *fiHead=head;
//     Node *fiTail=chead;
//     while (fiHead && fiTail){
//         fiHead->next=fiTail->next;
//         fiHead=fiHead->next;
//         if(fiHead){
//             fiTail->next=fiHead->next;
//         }
//         fiTail=fiTail->next;
//     }
//     return chead;

    
// }











