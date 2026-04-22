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
Node *temp = Head;

//dELETE THE LAST NODE HAVING 2 CONDITION 1-> If ONE NODE IS PRESESNT  2-> IF a list is preesesnt 
Node *curr = Head;
Node *prev = NULL;
if(Head!=NULL){
    if(Head->next==NULL){
        Node *temp = Head;
        Head=NULL;
        delete temp;
    }else{
        //use 2 pointer to delte the node 
        while(curr->next!=NULL){
            prev=curr;
            curr=curr->next;
        }
        prev->next=NULL;
        delete curr;
    }
}

while(temp){
    cout<<temp->data<<" ";
    temp=temp->next;
}
    return 0;
}