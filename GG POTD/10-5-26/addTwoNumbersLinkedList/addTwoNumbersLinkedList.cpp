// Strike https://strikes.in/practice/69afaf835c9e0542d6855c52
/* struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
}; */
// Node *reverse(Node* head){
//     Node *curr=head;
//     Node *prev=NULL;
//     Node *fut=NULL;
//     while(curr){
//       fut=curr->next;
//       curr->next=prev;
//       prev=curr;
//       curr=fut;  
//     }
//     return prev;
// }
// Node* addTwoLists(Node* num1, Node* num2) {
//     // Code here
//     // #step 1 reverse it 
//     num1=reverse(num1);
//     num2=reverse(num2);
//     Node *curr1=num1;
//     Node *curr2=num2;
//     Node *head=new Node(0);
//     Node *tail = head;
//     int sum=0,carry=0;
//     //# step2 add them
//     while(curr1&&curr2){
//         sum=curr1->data+curr2->data+carry;
//         int digit = sum % 10;
//         tail->next=new Node(digit);
//         tail=tail->next;
//         curr1=curr1->next;
//         curr2=curr2->next;
//         carry = sum / 10;
//     }
//     //curr1 jinda ho to 
//     while(curr1){
//         sum=curr1->data+carry;
//         int digit=sum%10;
//         tail->next=new Node(digit);
//         tail=tail->next;
//         curr1=curr1->next;
//         carry=sum/10;
//     }
//     //curr 2 agar jinsda ho to 
//     while(curr2){
//         sum = curr2->data+carry;
//         tail->next=new Node(sum%10);
//         tail=tail->next;
//         curr2=curr2->next;
//         carry = sum/10;
//     }
//     //last pe carry zinda rahye gaya to 
//     while(carry){
        
//         tail->next=new Node(carry%10);
//         tail=tail->next;
//         carry =carry/10;
//     }
//     head=reverse(head->next);
//     // check karo kya head ka value 0 he uske sath head ka next exixst karta ho 
//     while(head&&head->data==0&&head->next){
//         head=head->next;
//     }
//     return head;
// }





// LEETcode https://leetcode.com/problems/add-two-numbers-ii/description/

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
// class Solution {
// public:
//     ListNode* reverse (ListNode *head){
//         ListNode *curr = head;
//         ListNode *prev = NULL;
//         ListNode *fut = NULL;
//         while(curr){
//             fut=curr->next;
//             curr->next=prev;
//             prev=curr;
//             curr=fut;
//         }
//         return prev;
//     }
//     ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//        //Step1 reverse karo list ko 
//        l1 = reverse(l1);
//        l2 = reverse(l2);
//        ListNode* curr1 = l1;
//        ListNode* curr2 = l2;
//        //create a dummy node 
//        ListNode *head = new ListNode(0);
//        ListNode* temp = head;
//        int sum =0 , carry = 0, digit =0;
//        //chalao bhaii loop
//        while(curr1 && curr2){
//         sum=curr1->val+curr2->val+carry;
//         temp->next = new ListNode(sum%10);
//         temp = temp->next;
//         curr1=curr1->next;
//         curr2=curr2->next;
//         carry=sum/10;
//        } 
//        //agar curr1 jinda rehetea he 
//        while(curr1){
//         sum=curr1->val+carry;
//         temp->next=new ListNode(sum%10);
//         temp=temp->next;
//         curr1=curr1->next;
//         carry=sum/10;
//        }
//        while(curr2){
//         sum=curr2->val+carry;
//         temp->next=new ListNode(sum%10);
//         temp=temp->next;
//         curr2=curr2->next;
//         carry=sum/10;
//        }
//        //agar carry zinda hoo usse pe dafna te he 

//        while(carry){
//         temp->next=new ListNode(carry%10);
//         temp=temp->next;
//         carry = carry/10;
//        }
//        //abb head ko dekhna he 
//        //head jikso [point karr rah he wo dummy node he isliyiye head ko next ko bbhejo revese ke liye ]
//        head=reverse(head->next);
//        while(head&&head->val==0&&head->next){
//         head=head->next;
//        }
//        return head;
//     }
// };










// GG https://www.geeksforgeeks.org/problems/add-two-numbers-represented-by-linked-lists/1


/*
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
//   Node *reverse(Node* head){
//     Node *curr=head;
//     Node *prev=NULL;
//     Node *fut=NULL;
//     while(curr){
//       fut=curr->next;
//       curr->next=prev;
//       prev=curr;
//       curr=fut;  
//     }
//     return prev;
// }


// Node* addTwoLists(Node* num1, Node* num2) {
//     // Code here
//     // #step 1 reverse it 
//     num1=reverse(num1);
//     num2=reverse(num2);
//     Node *curr1=num1;
//     Node *curr2=num2;
//     Node *head=new Node(0);
//     Node *tail = head;
//     int sum=0,carry=0;
//     //# step2 add them
//     while(curr1&&curr2){
//         sum=curr1->data+curr2->data+carry;
//         int digit = sum % 10;
//         tail->next=new Node(digit);
//         tail=tail->next;
//         curr1=curr1->next;
//         curr2=curr2->next;
//         carry = sum / 10;
//     }
//     //curr1 jinda ho to 
//     while(curr1){
//         sum=curr1->data+carry;
//         int digit=sum%10;
//         tail->next=new Node(digit);
//         tail=tail->next;
//         curr1=curr1->next;
//         carry=sum/10;
//     }
//     //curr 2 agar jinsda ho to 
//     while(curr2){
//         sum = curr2->data+carry;
//         tail->next=new Node(sum%10);
//         tail=tail->next;
//         curr2=curr2->next;
//         carry = sum/10;
//     }
//     //last pe carry zinda rahye gaya to 
//     while(carry){
        
//         tail->next=new Node(carry%10);
//         tail=tail->next;
//         carry =carry/10;
//     }
//     head=reverse(head->next);
//     // check karo kya head ka value 0 he uske sath head ka next exixst karta ho 
//     while(head&&head->data==0&&head->next){
//         head=head->next;
//     }
//     return head;
// }
   
// };








