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
    Node *Head=NULL;
    int arr[]={1,3,45,5,6654,7,5,345,245,67,67,3,36,658,265,7};
    for(int i=0;i<16;i++){
        if(Head==NULL){
            Head =new Node(arr[i]);
        }
        else{
            Node *tail=Head;
            //tail ko age lo jab tak wo null nahii hojata 
            while (tail->next!=NULL)
            {
                tail=tail->next;   
            }
            tail->next=new Node(arr[i]);
            
        }

    }

    Node*temp=Head;
    while(temp){
        cout<<temp->data<<",";
        temp=temp->next;
    }
    return 0;
}