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


// delete the node X ]
int x = 4;
//there are two condition 
//delete the first node and delte he the particular node which is X 
if(x==1){
    Node *temp=Head;
    Head= Head->next;
    delete temp;
}else{
    while(--x){
        prev=curr;
        curr=curr->next;
    }
    prev->next=curr->next;
    delete curr;
}


Node *temp = Head;
while(temp){
    cout<<temp->data<<" ";
    temp=temp->next;
}
    return 0;
}