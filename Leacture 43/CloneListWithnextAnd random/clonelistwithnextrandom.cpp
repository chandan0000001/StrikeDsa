// 346. Clone List with Next and Random
// HARD
// You are given a special linked list with n nodes where each node has two pointers: a next pointer that points to the next node of the singly linked list, and a random pointer that points to any random node of the linked list.

// Construct a deep copy of this linked list. The copy should consist of the same number of new nodes, where each new node has the value corresponding to its original node. Both the next and random pointer of the new nodes should point to new nodes in the copied list, such that it also represents the same list state. None of the pointers in the new list should point to nodes in the original list.

// Return the head of the copied linked list.

// NOTE: Original linked list should remain unchanged.

// Each node of the linked list is represented as a pair of [val, random_index] where:

// val represents node.data
// random_index (1-based index) represents the index of the node that the random pointer of the current node points to, or NULL if it does not point to any node.
// Illustration for Clone List with Next and Random
// Example 1:
// Input: LinkedList: [[1, 3], [2, 1], [3, 5], [4, 3], [5, 2]]
// Output: [[1, 3], [2, 1], [3, 5], [4, 3], [5, 2]]
// Explanation:
// Node 1 points to Node 2 as its NEXT and Node 3 as its RANDOM.
// Node 2 points to Node 3 as its NEXT and Node 1 as its RANDOM.
// Node 3 points to Node 4 as its NEXT and Node 5 as its RANDOM.
// Node 4 points to Node 5 as its NEXT and Node 3 as its RANDOM.
// Node 5 points to NULL as its NEXT and Node 2 as its RANDOM.
// Example 2:
// Input: LinkedList: [[1, 3], [3, 3], [5, NULL], [9, 3]]
// Output: [[1, 3], [3, 3], [5, NULL], [9, 3]]
// Explanation:
// Node 1 points to Node 3 as its NEXT and Node 5 as its RANDOM.
// Node 3 points to Node 5 as its NEXT and Node 5 as its RANDOM.
// Node 5 points to Node 9 as its NEXT and NULL as its RANDOM.
// Node 9 points to NULL as its NEXT and Node 5 as its RANDOM.
// Example 3:
// Input: LinkedList: [[7, NULL], [7, NULL]]
// Output: [[7, NULL], [7, NULL]]
// Explanation:
// Simple case with duplicate values and no random pointers.
// Both nodes have value 7, no random pointers set.
// First node points to second, second points to NULL.
// Constraints:
// • 1 ≤ n ≤ 100
// • 0 ≤ node->data ≤ 1000


// /* struct Node {
//     int data;
//     Node *next;
//     Node *random;
//     Node(int x) : data(x), next(nullptr), random(nullptr) {}
// }; */

// Node* cloneLinkedList(Node* head) {
//     if(!head) {return NULL;}
//     //create a cloned linkedd list 
//     Node *curr = head;
//     while (curr){

//         Node *cloneCURR = new Node(curr->data);
//         //curr jisko point karr rha a he cloneCURR ke next ko waha dalo 
//         cloneCURR->next=curr->next;
//         //curr ke next ko cloneCURR ko point karawo  
//         curr->next=cloneCURR;
//         //curr ko cloneCURR se age lo 
//         curr=cloneCURR->next;
//     }
//     // 1->1->2->2-3->3->4->4->5->5=
//     //reset the curr to the head and then joint the random with th curr 
//     curr=head;
//     while(curr){
//         if(curr->next){
//             if(curr->random){
//                  curr->next->random=curr->random->next;
//             }
//             //curr move in 2x by skipping the  clone values
//             else{  curr->next->random=NULL;
//         }
//     }
//         curr=curr->next->next;
//     }
//     //remove the clone list 
//     Node *result = head->next ; //head ke next mens it pointing to the clones 
//     Node *cloneCURR = head->next;    //it act as cloneCURR node which point to the clone node 
//     //reset the curr
//     curr=head;
//     while(curr){
//         //curr ko point karo cloneCURR jisko point karr raha he
//         curr->next=cloneCURR->next;
//         //current ko age lo 
//         curr=curr->next;
//         if(curr){
//             //cloneCURR ko point karao jiso curr point karra rha he usko todna he 
//             cloneCURR->next=curr->next;
//             //cloneCURR ko age lo 
//             cloneCURR=cloneCURR->next;
//         }
//     }
//     return result;
// }