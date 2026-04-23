#include<iostream>
using namespace std;
class Node {
    public:
    int value;
    Node *next;
    Node(int data){
        value=data;
        next=NULL;
    }
};

Node *createLinkedList(int arr[],int size,int index){
    if (index==size){
        return NULL;
    }
    Node *temp = new Node(arr[index]);
    temp->next= createLinkedList(arr,size,index+1);
    return temp;
};

Node *middlelinkedlist(Node *head){
    Node *slow=head;
    Node *fast=head;
    while(fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;
    };
    return slow;
};
int main (){
    int arr[8]={23,34,46,344,66,78,33,4};

    Node *Head = NULL;
    Head = createLinkedList(arr,8,0);

    Node *middle = middlelinkedlist(Head);

    Node *temp=Head;
    while(temp){
        cout<<temp->value<<" ";
        temp=temp->next;
    }

   cout<<endl<<"The mid value is: "<<"";
    cout<<middle->value<<endl;
    cout<<middle->next<<endl;

    return 0;
}