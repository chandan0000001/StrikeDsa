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
int main (){
    //instert node between two elements 
      int arr[]={2,3,5,3,2,5,7,0};
Node *Head = NULL;
Node *Tail = NULL;
for(int i =0 ;i < 8;i++){
    if (Head==NULL){
         Head = new Node(arr[i]);
    Tail=Head;
    }
   else{
    Tail->next=new Node(arr[i]);
    Tail=Tail->next;
   }
}

//insert 100 after 5 ;
Node *temp = Head;
while(temp->data!=5){
    temp = temp->next;
}
//temp is pointing 5
Node *newNode = new Node(100);
//temp ka next ka value ko newNode ke next value ke andar dalo 
newNode->next=temp->next;
//temp ke next ke andar newNode ko daldo 
temp->next=newNode;
    
//print it 
temp=Head;
while(temp){
    cout<<temp->data<<",";
    temp=temp->next;
} 
    return 0;
}