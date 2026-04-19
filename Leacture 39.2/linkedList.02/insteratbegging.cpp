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
    int arr[]={2,3,5,3,2,5,7,0,0,6,5,4,3,5};
    //instert at beggining
    Node *Head = NULL;
    for(int i=0;i<14;i++){ 
    if(Head==NULL){
        //create first node 
        Head=new Node (arr[i]);
    }
    else{
        //creating another node 
        Node *temp =new Node(arr[i]);
        temp->next=Head;
        Head=temp;
    }
  } 

  //
  Node *temp = Head;
  while(temp){
    cout<<temp->data<<",";
    temp=temp->next;
  }    
  return 0;
}