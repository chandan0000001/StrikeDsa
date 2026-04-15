#include<iostream>
using namespace std;

class Node{
    public: 
    int data;
    Node *next;

    //creating constructor 
    Node(int value,Node *adress){
        data = value;
        next = adress;
    }

};

int main(){
    // Node n1;
    // n1.data=10;
    // n1.next=NULL;
    // cout<<n1.data<<" ";



    // Node n1(10,NULL);
    // cout<<n1.data<<" ";

    // for storing in the heap 
    Node *head = new Node(10,NULL);
    cout<<head->data<<" ";
    // cout<<head->next<<" ";
    return 0;
}




// https://excalidraw.com/#json=EJ9XJcVMDAypPj5ZyOY-1,nR7XkNU4a3G12S5j4SnhPA