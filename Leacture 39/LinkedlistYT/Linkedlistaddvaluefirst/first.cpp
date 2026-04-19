#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    //creating the constructor
    Node(int value){
        data=value;
        next=NULL;
    }

};
int main(){
    //createing the object 
    //it form static type
    // Node A1(4);


    //now forming the dynamicaly 
    Node *Head;
    Head = new Node(4);
    cout<<Head->data<<endl;
    cout<<Head->next<<endl;

    
    return 0;
}