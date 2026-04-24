//remove nth node from end 
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

//rotate nth node from end 
    Node *removeNthNode(Node*Head,int n){
        //count the value
        int count =0;
        Node *temp1=Head;
        while(temp1){
            count++;
            temp1=temp1->next;
        };
        //move the end pointer to the 
        int pos = count - n;
        //edge case 
        if(pos == 0){
            Node *tempx=Head;
            Head=Head->next;
            delete tempx;
            return Head;
        }
        //create two pointer and remove the lasst node 
        Node *curr = Head;
        Node *prev = NULL;
        //move to the position 
        while(pos--){
            prev=curr;
            curr=curr->next;
        };
        //connect the pointerd node to the next node 
        prev->next=curr->next;
        delete curr;
        return Head;
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

    Node *nthNode = Head;
    int n = 7;
    Node *temp2 = removeNthNode(nthNode,n);
    while(temp2){
        cout<<temp2->data<<" ";
        temp2=temp2->next; 
       }

    
    return 0;
}