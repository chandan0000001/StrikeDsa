
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
//create a linkedlist and use the operation on it 
Node *createLinkedList(int arr[],int size,int index){
    if(index==size){
        return NULL;
    }
    Node *temp = new Node(arr[index]);
    temp->next=createLinkedList(arr,size,index+1);
    return temp;
};



Node* rotateRight(Node* head, int k) {
        //edge case 
    if (head==NULL||head->next==NULL){return head;};
    //count the all values 
    int count = 0;
    Node *prev=NULL;
    Node *curr=head;
    Node* temp = head;
    while(temp){
        count++;
        temp=temp->next;
    }
    //avoid the repeat task so use modulo operatioon 
    k=k%count;
    if(k==0){return head;}
    //find pos
    int pos = count - k;
    while(pos){
        prev=curr;
        curr=curr->next;
        pos=pos-1;
    }
    prev->next=NULL;
    // divinding two parts
    Node *tail = curr;
    while(tail->next){
        tail=tail->next;
    }
tail->next=head;
head=curr;
return head;

}



int main(){

    int arr[10]={23,43,5,4,35,63,32,254,55,22};
    Node *Head = NULL;
    Head = createLinkedList(arr,10,0);
    Node *temp = Head;
    //printing the linkedlist 
    // while(temp){
    //     cout<<temp->data<<" ";
    //     temp=temp->next;
    // }




Node *tempx = Head;
int k = 2;
tempx = rotateRight(Head,k);
      while(tempx){
        cout<<tempx->data<<" ";
        tempx=tempx->next;
    }
    
    return 0;
}