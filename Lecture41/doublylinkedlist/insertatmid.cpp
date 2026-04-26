#include<iostream>
using namespace std;
class Node{
    public:
    int value;
    Node *next,*prev;
    Node(int data){
        value=data;
        next=prev=NULL;  
    }
};

void printDLL(Node *head){
    while(head){
        cout<<head->value<<" , ";
        head=head->next;
    }
}

 
int main(){
    int arr[5]={1,2,6,85,4};
    Node *Head = NULL;
    Node *tail = NULL;
    for(int i =0;i<5;i++){
        if(!Head){
            Head = new Node(arr[i]);
            tail=Head;  
        }else{
            Node *temp = new Node(arr[i]);
            tail->next=temp;
            temp->prev=tail;
            tail=temp;
        }
    }

    Node *curr = Head;
    //head ke baad insert  hoga 
    Node *tempx = new Node(30);
    tempx->next=curr->next;
    tempx->prev=curr;
    curr->next->prev=tempx;
    curr->next=tempx;


 printDLL(Head);
    return 0;
}