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
        cout<<head->value<<" ";
        head=head->next;
    }
}
 
int main(){
    int arr[5]={1,2,6,85,4};
    Node *Head = NULL;
    for(int i=0;i<5;i++){
        if(!Head){
            Head=new Node(arr[i]);
        }
        else{
            Node *temp = new Node(arr[i]);
            temp->next=Head;
            Head->prev=temp;
            Head=temp;
        }
    }
 printDLL(Head);
    return 0;
}


