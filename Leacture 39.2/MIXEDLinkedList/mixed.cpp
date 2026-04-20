#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    //making constructor
    Node(int value){
        data=value;
        next=NULL;
    }
};
int main(){
    // int arr[8]={1,9,3,0,5,0,7,9};
    //insert at end 
    //void insertAtEnd(){}
    // Node *Head = NULL;
    // Node *Tail = NULL;
    // for(int i=0;i<8;i++){
    //     if(Head==NULL){
    //         Head=new Node(arr[i]);
    //         Tail=Head;
    //     }else{
    //         Tail->next=new Node(arr[i]);
    //         Tail=Tail->next;
    //     }
    // }
    // Node *temp = Head;
    // while(temp){
    //     cout<<temp->data<<",";
    //     temp=temp->next;
    // }
    



    // int arr[8]={1,9,3,0,5,0,7,9};
    //inseart at beggining 
    // Node *Head=NULL;
    // for(int i=0;i<8;i++){
    // if(Head==NULL)Head=new Node(arr[i]);
    // else{
    //     Node *temp = new Node(arr[i]);
    //     temp->next=Head;
    //     Head=temp;
    //   }
    // }
    //   Node *temp = Head;
    // while(temp){
    //     cout<<temp->data<<",";
    //     temp=temp->next;
    // }




//     //insert node after a particular point at mid 
//     //insert 3 after 5 
// //  arrange the all nodes point by point 
//  int arr[8]={1,9,3,0,5,0,7,9};
//        Node *Head = NULL;
//     Node *Tail = NULL;
//     for(int i=0;i<8;i++){
//         if(Head==NULL){
//             Head=new Node(arr[i]);
//             Tail=Head;
//         }else{
//             Tail->next=new Node(arr[i]);
//             Tail=Tail->next;
//         }
//     }
//     //travers to the 5 
//     Node *temp=Head;
//     while(temp->data!=5){
//         temp=temp->next;
//     }
//     //now temp is pointing to the 5 // temp->next is haveing adress of next element 
//     Node*newNode=new Node(3);
//     newNode->next=temp->next;
//     temp->next=newNode;
//     //prinitng time 
// temp=Head;
//  while(temp){
//     cout<<temp->data<<",";
//     temp=temp->next;
//  }





//insert a node before a targeting point 
 //insert 3 before 5 


int arr[8]={1,9,3,0,5,0,7,9};
  Node *Head = NULL;
    Node *Tail = NULL;
    for(int i=0;i<8;i++){
        if(Head==NULL){
            Head=new Node(arr[i]);
            Tail=Head;
        }else{
            Tail->next=new Node(arr[i]);
            Tail=Tail->next;
        }
    }
    
//traverse to the 5 
//insert the element 3 before 5
Node *curr=Head;
Node *prev=NULL;
while(curr->data!=5){
    prev=curr;
    curr=curr->next;
}
//now curr is poining to the 5 and prev poining to the previous element: '0'
Node *temp = new Node(3);
prev->next=temp;
temp->next=curr;
//prinintg time 
temp=Head;
while(temp){
    cout<<temp->data<<",";
    temp=temp->next;
}
 
    return 0;
}