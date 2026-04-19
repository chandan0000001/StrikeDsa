#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    //constructor 
    Node(int value){
        data=value;
        next=NULL;
    }
};
int main(){
     int arr []={2,4,6,3};
     //insert the array next by next
     //check the head is null or not
        Node*Head=NULL;
        Node*Tail=NULL;
     for (int i=0;i<4;i++){
       //linkd list khali he 
        if(Head==NULL){
            Head=new Node(arr[i]);
            Tail=Head;
        }
        else{
            Tail->next=new Node(arr[i]);
            Tail=Tail->next;
        }
     }
     Node *temp=Head;
     //while temp exist 
     while(temp){
        cout<<temp->data<<",";
        temp=temp->next;
     }
    return 0;
}