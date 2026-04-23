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

Node *creatLinkedlist(int arr[] ,int index,int size){
    //base case
    if(index==size){
        return NULL;
    }
    Node*temp=new Node(arr[index]);
    temp->next=creatLinkedlist(arr,index+1,size);
    return temp;
};

Node *reverseTheLinkedList(Node *Head){
  
};

int main(){
    int arr[8] = {21,43,5,24,54,77,46,53};
    Node *Head= NULL;
    Head=creatLinkedlist(arr,0,8);
    Node *temp = Head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    };

    Head=reverseTheLinkedList(Head);

cout<<"After reverse the linked list ";


 Node *temp2 = Head;
    while(temp2){
        cout<<temp2->data<<" ";
        temp2=temp2->next;
    };
    return 0;
}