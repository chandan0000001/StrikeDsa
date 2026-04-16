#include<iostream>
using namespace std;

class Node{

     public: 
    int data;
    Node *next;

    //creating constructor 
    Node(int value){
        data = value;
        next = NULL;
    }
};

int main(){


    int arr[5]= {10,13,20,11};
    Node *Head = NULL;
    Node *Tail = NULL;
    

    for (int i =0 ;i<5;i++){


        //if head value is not exist 
    // create a first value 
        if(!Head){
        Head = new Node(arr[0]);
        Tail= Head;
    }
    else{
        //if head is pointing some one 
        //add element at last 
        Tail->next = new Node(arr[i]);
        //tail ko age wale pe point karo 
        Tail=Tail-> next;
    }
    }



    //traverse the linked list 
    Tail = Head;
    while(Tail!=NULL){
        cout<<Tail->data<<" ";
        Tail=Tail->next;
    }
 
    return 0;
}

