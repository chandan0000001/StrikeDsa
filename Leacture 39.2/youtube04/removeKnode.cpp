// deleteKthPosition 
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

Node *deleteKthPosition (Node *head,int k){
    //edge case 
   
    if (k==1){
        {
            while(head){
                Node *temp=head;
                head = head->next;
                delete temp;
            }
        };
        return NULL;
    };

    int count=1;
    Node *prev=NULL,*curr=head;
    while(curr!=NULL){

        //k==count delte this node 
        if(k==count){
            prev->next=curr->next;
            delete curr;
            curr=prev->next;
            count=1;
        }
        //skip this node 
        else{
            prev=curr;
            curr=curr->next;
            count++;
        }
    }
    return head;
};
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
    
    Node *temp2=Head;
    int k=5;
    temp2 = deleteKthPosition(Head,k);
    while (temp2)
    {
        cout<<temp2->data<<" ";
        temp2=temp2->next;
    }
    
    return 0;
}