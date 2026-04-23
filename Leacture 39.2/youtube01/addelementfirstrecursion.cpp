#include<iostream>
using namespace std;
class Node {
    public:
    int data;
    Node *next;
    Node(int value){
        data=value;
        next=NULL;
    }
};
Node *creatLinkedlist(int arr[],int index,int size,Node *prev){
   if(index==size){
    return prev;
   }
   Node *temp=new Node(arr[index]);
   temp->next=prev;
   //adress was sending to the next ;
   return creatLinkedlist(arr,index+1,size,temp);
   //function call for next node temp contain adress of prev 
}
int main(){


    int arr[8] = {21,43,5,24,54,77,46,53};
    Node *Head= NULL;
    Head=creatLinkedlist(arr,0,8,NULL);
    Node *temp = Head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}