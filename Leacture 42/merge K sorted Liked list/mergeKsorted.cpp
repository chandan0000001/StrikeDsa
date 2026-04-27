// 339. Merge K sorted linked lists
// MEDIUM
// Solved
// Given an array arr[] of K sorted linked lists of different sizes. Your task is to merge all these lists into a single sorted linked list and return the head of the merged list.

// Note: The input lists are sorted in ascending order.

// Example 1:
// Input: Lists: 1->3->7 | 2->4->8 | 9
// Output: 1->2->3->4->7->8->9
// Example 2:
// Input: Lists: 1->3 | 8 | 4->5->6
// Output: 1->3->4->5->6->8
// Constraints:
// • 1 ≤ K ≤ 10^3
// • 1 ≤ Total number of nodes ≤ 10^5
// • 1 ≤ node->data ≤ 10^3

/* struct Node {
    int data;
    Node* next;
    Node(int x) : data(x), next(nullptr) {}
}; */



// Node* sort(Node* head1, Node* head2) {
//     if(!head1) return head2;
//     if(!head2) return head1;

//     Node *Head = new Node (0);//this is the dummmy node 
//     //tail is point to the dummy node 
//     Node *Tail = Head;

//     while(head1&&head2){
//     if(head1->data <= head2->data){
//         Tail->next=head1;
//         head1=head1->next;
//         Tail=Tail->next;
//         Tail->next=NULL;
//     }else{
//         Tail->next=head2;
//         head2=head2->next;
//         Tail=Tail->next;
//         Tail->next=NULL;
//     }

//     //ATTACH THE REMAINING NODES
//     if(!head1){
//         Tail->next=head2;
//     }else{
//         Tail->next=head1;
//     }
// }
//     //delete the dummy node 
//     Node *dummy = Head;
//     Head=Head->next;
//     delete dummy;
//     return Head;
// }

 



// Node *merge(Node* arr[],int start,int end){
//     if(start==end) {return arr[start];}
//     int mid = start+(end-start)/2;
//     Node *head1 = merge(arr,start,mid);
//     Node *head2 = merge(arr,mid+1,end);
//     return sort(head1,head2);
// }

// Node* mergeKLists(Node* arr[], int K) {
//     // Your code here
//     if(K==0) return NULL;
//     return merge(arr,0,K-1);
// }