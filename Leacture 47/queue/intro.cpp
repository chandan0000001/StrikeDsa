#include<iostream>
using namespace std; 


class Queue{
    public:
    int front,rear,capacity;
    int *arr;

    Queue(int size){
        arr = new int[size];
        capacity=size;
        front=rear=-1;
    }
    bool isEmpty(){
        return rear == -1;
    }
    bool isFull(){
        return rear == capacity-1;
    }
    void Push(int x){
        if(isEmpty()){
            front=rear=0;
            arr[rear]=x;
            cout<<x<< " Pushed into Queue\n";
            return;
        }
        else if(isFull()){
            cout<<"Queue is full";
            return;
        }
        else{
            rear=rear+1;
            arr[rear]=x;
            cout << x << " Pushed into Queue\n";
            return;
        }
    }
    void pop(){
        if(isEmpty()){
            cout<<"Quesue is empty\n";
        }else{
            cout<<arr[front]<< " poped from queue\n";
            front = front +1;
            //if front becomes bigger the rear 
            if(front>rear){
                front =rear = -1;
            }
        }
    }


    int getFront(){
        if(isEmpty()){
            cout<<"Queue is Empty";
            return -1;
        }
        else{
            return arr[front];
        }
    }



    int isSize(){
        if(isEmpty()){
            return 0;
        }

        return rear-front+1;
    }
};

int main(){
    //playing with queueu


    Queue q(5);
    q.Push(10);
    q.Push(30);
    q.Push(38);
    q.pop();
    cout<<q.isSize();

    q.Push(140);
    q.Push(304);
    q.Push(385);
    cout << q.isSize()<<endl;

    cout << q.getFront()<<endl;

    return 0;
}