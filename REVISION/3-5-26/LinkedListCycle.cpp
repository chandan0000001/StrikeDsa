// LEETCODE      https://leetcode.com/problems/linked-list-cycle/?envType=problem-list-v2&envId=linked-list



// GG               https://www.geeksforgeeks.org/problems/detect-loop-in-linked-list/1





// strikes            https://strikes.in/practice/68c2d3de7a37da4267fb97bf    
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


