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
    //add last of the linkedlist 
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
    //printing
    Node *temp=Head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return 0;
}