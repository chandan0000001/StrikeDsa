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
Node *createLinkedList(int arr[],int size,int index){
    if(size==index){
        return NULL;
    }
    Node *temp = new Node(arr[index]);
    temp->next=createLinkedList(arr,size,index+1);
    return temp;
}
int main(){
    int arr[8]={32,4532,56,657,87,75,57,7};
Node *Head = NULL;
Head = createLinkedList(arr,8,0);
Node *curr = Head;
Node *prev = NULL;

//delte a node without head pointer 
int x = 6;
while(--x){
    prev= curr;
    curr=curr->next;
}

Node *Temp = curr->next;
curr->data=Temp->data;
curr->next=Temp->next;
delete Temp;

//PRINITNG TIME 
Node *temp = Head;
while(temp){
    cout<<temp->data<<" ";
    temp=temp->next;
}
    return 0;
}