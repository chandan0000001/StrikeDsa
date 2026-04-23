#include<iostream>
#include<vector>
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
};

Node *reverseTheLinkedList(Node *Head){
  vector<int>ans;
  Node *temp = Head;
  //put the all elements in the array
  while(temp){
    ans.push_back(temp->data);
    temp=temp->next;
  };

  int i = ans.size()-1; //it point to the last intiger of the array 
  temp=Head;
  while(temp){
    temp->data=ans[i];
    i--;temp=temp->next;
  };
  return Head;

};

int main(){
    int arr[8] = {21,43,5,24,54,77,46,53};
    Node *Head= NULL;
    Head=creatLinkedlist(arr,0,8);
    Node *temp = Head;


    cout<<"Orginal Linked List "<<endl;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    };

cout<<endl;
cout<<"After reverse the linked list "<<endl;

Head=reverseTheLinkedList(Head);
 Node *temp2 = Head;
    while(temp2){
        cout<<temp2->data<<" ";
        temp2=temp2->next;
    };
    return 0;
}