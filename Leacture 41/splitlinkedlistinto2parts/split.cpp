// 100. Split a Linked List into two halves
// EASY
// Solved
// Given a Singly linked list, split it into two Singly Linked lists. If there are an odd number of nodes in the given linked list, the first list should have one node more than the second list.


// Example 1:
// Input: LinkedList: 10->4->9->7
// Output: [10->4, 9->7]
// Explanation:
// Number of nodes in the Linked List are even, so it will split from two equal halves.
// Example 2:
// Input: LinkedList: 10->4->9
// Output: [10->4, 9]
// Explanation:
// Number of nodes in the Linked List are odd, so it will split as 10-> 4 and 9.
// Constraints:
// • 2 <= number of nodes <= 10^5
// • 1 <= node->data <= 10^3



/*
// struct ListNode {
//     int val;
//     ListNode* next;
//     ListNode(int x) : val(x), next(nullptr) {}
// };
// */
// pair<ListNode*, ListNode*> splitList(ListNode *head) {
//     if(head==NULL|| head->next==NULL) return {head,NULL};

//     ListNode *slow = head;
//     ListNode *fast = head;
//     ListNode *prev = head;
//     while(fast!=NULL && fast->next!=NULL){
//         prev=slow;
//         slow=slow->next;
//         fast=fast->next->next;
//     }
//     //even pe first dead ho jatta he and odd pe dead nahi hota so usko handle krne ke liye 
//     //slow ka value prev ke andar dalo and slow ko age lejaoo 
    

//     if(fast){
//         prev=slow;
//         slow=slow->next;
//     }

//     //first half ke end ko set karo null and 2nd wala to already null hoga 
//     prev->next=NULL;
//     return {head,slow};
// }