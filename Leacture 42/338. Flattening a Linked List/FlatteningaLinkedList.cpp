// 338. Flattening a Linked List
// MEDIUM
// Solved
// Given a Linked List of size N, where every node represents a sub-linked-list and contains two pointers:

// next points to the next node in the main list (horizontal).
// bottom points to a sub-linked list where the current node is the head (vertical).
// Each of the sub-linked lists and the main list are sorted in ascending order based on their data. Your task is to flatten the linked list such that all the nodes appear in a single level while maintaining the sorted order.

// Note: The flattened list should be linked using the bottom pointer. The next pointer of all nodes in the flattened list should be NULL.

// Illustration for Flattening a Linked List
// Example 1:
// Input: 5->7->8 | 10->20 | 19->22 | 28->40->45
// Output: 5->7->8->10->19->20->22->28->40->45
// Explanation:
// Merging the given sorted sub-lists produces the sorted flattened list.
// Example 2:
// Input: 5->7->8->30 | 10->20 | 19->22->50 | 28->35->40->45
// Output: 5->7->8->10->19->20->22->28->30->35->40->45->50
// Explanation:
// The main list has heads 5, 10, 19, 28.
// Each vertical list is sorted.
// Merging them yields the sorted sequence linked via bottom pointers.
// Constraints:
// • 0 ≤ N ≤ 100
// • 1 ≤ number of nodes in sub-linked list ≤ 50
// • 1 ≤ node->data ≤ 10^4



/* struct Node {
    int data;
    struct Node * next;
    struct Node * bottom;
    Node(int x) {
        data = x;
        next = NULL;
        bottom = NULL;
    }
}; */

// Node *sort(Node*head1,Node*head2){  
//     //edge casess 
//     if(!head1){return head2;}
//     if(!head2) {return head1;}
//     //create dummy node
//     Node *dummy = new Node(0);
//     //create tail pointer which point to the dummy 
//     Node *tail = dummy;

//     while(head1&&head2){
//         if(head1->data <= head2->data){
//             tail->bottom=head1;
//             head1=head1->bottom;
//             tail=tail->bottom;
//             tail->bottom=NULL;
//         }else{
//             tail->bottom=head2;
//             head2=head2->bottom;
//             tail=tail->bottom;
//             tail->bottom=NULL;
//         }
//         if(head1){
//             tail->bottom=head1;
//         }
//         else{
//             tail->bottom=head2;
//         }
//     }


//     Node *temp =dummy->bottom;
//     delete dummy;
//     return temp; 


//     //why it swows wring i dont know 
//     // Node *temp = dummy;
//     // dummy=dummy->next;
//     // delete dummy;
//     // return temp;

// }   



// Node* merge(vector<Node*> &arr,int start,int end){
//     if(start==end){
//         return arr[start];
//     }
//     int mid = start+(end-start)/2;
//     Node *head1=merge(arr,start,mid);
//     Node *head2=merge(arr,mid+1,end);

//     return sort(head1,head2);
// }

// Node* flatten(Node* root) {
//     // Your code here
//     vector<Node*> temp;
//     Node *traverse = root;
    

//     // traverse  the complete alll element push into the array 
//     while(traverse){
//         temp.push_back(traverse);
//         traverse=traverse->next;
       
//     }
//     return merge(temp,0,temp.size()-1);
// }





// another type 

// /* struct Node {
//     int data;
//     struct Node * next;
//     struct Node * bottom;
//     Node(int x) {
//         data = x;
//         next = NULL;
//         bottom = NULL;
//     }
// }; */

// Node *sort(Node*head1,Node*head2){  
//     //edge casess 
//     if(!head1){return head2;}
//     if(!head2) {return head1;}
//     //create dummy node
//     Node *dummy = new Node(0);
//     //create tail pointer which point to the dummy 
//     Node *tail = dummy;

//     while(head1&&head2){
//         if(head1->data <= head2->data){
//             tail->bottom=head1;
//             head1=head1->bottom;
//             tail=tail->bottom;
//             tail->bottom=NULL;
//         }else{
//             tail->bottom=head2;
//             head2=head2->bottom;
//             tail=tail->bottom;
//             tail->bottom=NULL;
//         }

//     }
//         if(head1){
//             tail->bottom=head1;
//         }
//         else{
//             tail->bottom=head2;
//         }



//     // Node *temp =dummy->bottom;
//     // delete dummy;
//     // return temp; 

//     Node *temp = dummy;
//     dummy = dummy -> bottom;
//     delete temp;
//     return dummy;


// }   



// Node* merge(vector<Node*> &arr,int start,int end){
//     if(start==end){
//         return arr[start];
//     }
//     int mid = start+(end-start)/2;
//     Node *head1=merge(arr,start,mid);
//     Node *head2=merge(arr,mid+1,end);

//     return sort(head1,head2);
// }

// Node* flatten(Node* root) {
//     // Your code here
//     vector<Node*> temp;
//     Node *traverse = root;
    

//     // traverse  the complete alll element push into the array 
//     while(traverse){
//         temp.push_back(traverse);
//         traverse=traverse->next;
       
//     }
//     return merge(temp,0,temp.size()-1);
// }