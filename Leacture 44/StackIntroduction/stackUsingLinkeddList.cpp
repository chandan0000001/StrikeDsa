#include<iostream>
using namespace std;
//Use stack for LinkdedList 
 class Node{
 public:
     int data;
     Node *next;

     Node(int value){
        data=value;
        next = NULL;
     }
 };

 class Stack{
    public:
    Node* index;
    int sizes;
    Stack(){
        index=NULL;
        sizes=0;
    }
   
    void push(int val){
        Node *temp = new Node(val);
        //chance of heap can be full so handle is 
        if(!temp){
            cout<<"Stack is Overflow";
            return;
        }
        temp->next=index; //temp ke next ko  index ko poiint karao 
        index=temp; // index ko temp ke age lo 
        sizes++;
        cout<<val<<" pushed into stack\n";
    }

    void pop(){
        if(index==NULL){
            cout<<"Stack is Underflow";
        }else{
            cout<<index->data<<" Poped from stack\n";
            Node *temp = index;
            index=index->next;
            delete(temp);
            sizes--;
        }
    }

    int top(){
        return index->data;
    }

    int size(){
        return sizes;
    }

    bool empty(){
        return sizes==0;
    }
 };

int main(){

    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.push(70);

    // cout << s.size() << "\n";
    // cout << s.empty() << "\n";
    cout << s.top() << "\n";

    return 0;
}
