// Remove every k'th node  GFG ( https://www.geeksforgeeks.org/problems/remove-every-kth-node/0 ) 

// /* Link list Node

// struct Node
// {
//     int data;
//     struct Node* next;

//     Node(int x){
//         data = x;
//         next = NULL;
//     }

// };
// */

// /*You are required to complete this method*/

// /* Function to get the middle of the linked list*/
// /*K will always be in range */
// class Solution {
//   public:
//     Node* deleteK(Node* head, int k) {
//         // code here
//         while(k==1){
//             while(head){
//             Node* temp = head;
//             head=head->next;
//             delete temp;
//             }
//             return NULL;
//         }
//         //agar 1 se jayada nodes present he 
//         Node *prev=NULL;
//         Node *curr=head;
//         int count =1;
//         while(curr){
//             if(k==count){
//                 //delte karna he yaha
                
//                 prev->next=curr->next;
//                 delete curr;
//                 curr=prev->next;
//                 count=1;
//             }else{
//                 //age badhhna he 
//                 prev = curr;//prev curr ke piche rahyega
//                 curr=curr->next;//curr age baddta jayega
//                 count++;//count increment hoga
//             }
//         }
//        return head;
//     }
// };



// Remove every k'th node   STRIKE  ( https://strikes.in/practice/69a5c3eb5c9e0542d68550f6 )  

// //revision Time 
// Node* deleteKth(Node* head, int k) {
//     //handle that case if one element is preesent 
//     if(k==1){
//         while(head){
//             Node *temp = head;
//             head=head->next;
//             delete temp;
//         }
//         return NULL;
//     }
// //if more than one element present 
// Node *prev = NULL;
// Node *curr = head;
// int count =1;
// while(curr){
//     if(k==count){
//         //delete karne ka section 
//         prev->next=curr->next;//prev jisko pont karr raha he usse point karao next jissye point karr raha he
//         delete curr;//curr jisko point karr raha he usse delete maro 
//         curr=prev->next;//curr ko point karao prev next jisko point karrraha he
//         count=1; //count ka value 1 karo (reset)
//     }else{
//         // age badhh ne ka section 
//         prev = curr;
//         curr=curr->next;
//         count++;
//     }
// }
//     return head;
// }