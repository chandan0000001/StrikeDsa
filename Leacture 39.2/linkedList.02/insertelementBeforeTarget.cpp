#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int value){
        data=value;
        next=NULL;
    }
};
int main (){
    //instert node between two elements 
      int arr[]={2,3,5,3,2,5,7,0};
Node *Head = NULL;
Node *Tail = NULL;
for(int i =0 ;i < 8;i++){
    if (Head==NULL){
         Head = new Node(arr[i]);
    Tail=Head;
    }
   else{
    Tail->next=new Node(arr[i]);
    Tail=Tail->next;
   }
}

//insert 100 before  5 ;
if(Head->data==5){
    Node *temp = new Node(100);
    temp->next=Head;
    Head=temp;
}
else{
    Node *prev=NULL;
    Node *curr=Head;

    while(curr->data!=5)
    //prev and curr ek pe point karo and curr ko age lo 
    {   prev=curr;
        curr=curr->next;
    }
    Node *temp =new Node(100);
    temp->next=curr;
    prev->next=temp;
}

//print it 
Node *temp=Head;
while(temp){
    cout<<temp->data<<",";
    temp=temp->next;
} 
    return 0;
}