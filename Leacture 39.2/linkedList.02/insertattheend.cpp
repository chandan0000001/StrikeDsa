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
    
    Node *Head = NULL;
    Node *Tail = NULL;
    for(int i=0;i<14;i++){
         if(Head==NULL){
            //Head==NULL or (!Head)
            //first node creatinopn 
        Head=new Node(arr[i]);
        Tail=Head;
    }else{
        //other node creatin by adding element in last 
        Tail->next=new Node(arr[i]);
        Tail=Tail->next;
    }
 }
   //trever the linkedlist 
   Tail = Head;
   while(Tail){
    cout<<Tail->data<<",";
    Tail=Tail->next;
   }



   //time complexity ==>> O(n);
    return 0;
}