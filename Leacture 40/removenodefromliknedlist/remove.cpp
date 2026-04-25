// 141. Remove Nodes From Linked List
// You are given the headof a singly linked list. Your task is to remove every node that has a node with a greater value somewhere to its right side in the linked list.
// Return the head of the modified linked list after all such nodes are removed.
// Illustration for Remove Nodes From Linked List
// Example 1:
// Input: head = [5,2,13,3,8]
// Output: [13,8]
// Explanation:
// For the linked list [5,2,13,3,8], each node that has a greater value on its right side is removed.
// The node 5 is removed because 13 appears later and is greater, similarly 2 and 3 are removed for the same reason.
// Only the nodes 13 and 8 remain since there are no greater values to their right.
// Hence, the output is [13,8].
// Example 2:
// Input: head = [1,1,1,1]
// Output: [1,1,1,1]
// Explanation:
// In the linked list [1,1,1,1], no node has a value greater than the others on its right since all values are equal.
// Therefore, no node is removed and the final linked list remains unchanged.
// The output is [1,1,1,1].
// Constraints:
// • Number of nodes in the list ≤ 10⁵
// • 1 ≤ Node.val ≤ 10⁹



// Definition for singly-linked list.
// struct ListNode {
//     int val;
//     ListNode *next;
//     ListNode() : val(0), next(nullptr) {}
//     ListNode(int x) : val(x), next(nullptr) {}
//     ListNode(int x, ListNode *next) : val(x), next(next) {}
// };

// ListNode* removeNodes(ListNode* head) {
//     //base case head agar nahii he or  end pe jaoo head or uska node return karo   
//     if(head == NULL || head->next==NULL  ){
//         return head;
//     }
//     // head next pe adreess recieve karo = agele pe chalye jaoo 
//    head->next = removeNodes(head->next);
//    //compare karr agar head ka value mujhe chotii attii he mere se next walo se to apna adress store karr temp pe khud ko delete kar (remove head) apna adress pass karr de head ke next ko (return temp)
//         if(head->val < head->next->val){
//             ListNode *temp = head->next;
//             delete head;
//             return temp;
//         }
//         //agar condition wrong he to khud ka adress pass karr de
//         return head;
    
// }