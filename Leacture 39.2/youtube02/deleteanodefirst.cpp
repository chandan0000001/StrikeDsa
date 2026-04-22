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

// cout<<Head->data<<endl;
if(Head!=NULL){
    Node *Temp = Head;
    Head=Head->next;
    delete Temp;
}
//PRINITNG TIME 
Node *temp = Head;
while(temp){
    cout<<temp->data<<" ";
    temp=temp->next;
}
    return 0;
}