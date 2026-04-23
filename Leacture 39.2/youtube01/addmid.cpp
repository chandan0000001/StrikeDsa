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
int main(){
    int arr[7]={2,8,3,22,69,32,6};
    Node *Head=NULL;
    Node *Tail=NULL;
    for(int i=0;i<7;i++){
        if(Head==NULL){
            Head=new Node(arr[i]);
            Tail=Head;
        }else{
            Tail->next=new Node(arr[i]);
            Tail=Tail->next;
        }
    }
    int pos = 3;
    int val = 30;
    Node *Temp= Head;
    while(--pos){
        Temp=Temp->next;
    } 
    Node *temp2 = new Node(val);
    temp2->next=Temp->next;
    Temp->next=temp2;

    Node *x = Head;
    while(x){
        cout<<x->data<<" ";
        x=x->next;
    }

    return 0;
}