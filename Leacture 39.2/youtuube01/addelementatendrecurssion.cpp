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
}
int main(){
    int arr[8] = {21,43,5,24,54,77,46,53};
    Node *Head= NULL;
    Head=creatLinkedlist(arr,0,8);
    Node *temp = Head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return 0;
}