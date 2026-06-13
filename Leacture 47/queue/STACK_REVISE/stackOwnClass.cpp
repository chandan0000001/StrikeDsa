#include<iostream>
using namespace std;
//Implimention of own stack 
class Stack{
    public:
    //we can use array 
    //we can use Linked list
     //data memebers 
    int *arr;
    int top;
    int size;
    //functions 
    Stack(int size){
        this->size=size;
        arr = new int[size];
        top = -1;
    }
    void push(int element){
        //befote push we need to check is there empty space 
        //if we consider  [size - top > 1 ] there is atleast 1 empty space right 
        if(size-top>1){
            top++;
            arr[top]=element;
        }else{
            cout<<" Stack is overflow"<<endl;
        }
    }
    void pop(){
        //check atleast there is one element then top must be 
        if(top>=0){
            //decrement the top 
            top--;
        }else{
            cout<< " stack underflow"<<endl;
        }
    }
    //this shows the top element of the stack 
    int topx(){
        if(top>=0 && top<size){
             return arr[top];
        }else{
            cout<<" Stack is empty"<<endl;
            return -1;
        }
    }
    bool isEmpty(){
        if(top==-1){
            return true;
        }else{
            return false;
        }
    }
};

//everythingdone in O(1);
int main(){
        //class name object size 
        // Stack st(5);

        // st.push(22);
        // st.push(32);
        // st.push(34);
        // cout<<st.topx()<<" ";
        // st.pop();
        // cout << st.topx() << " "<<endl;
        // st.pop();
        // cout << st.topx() << " "<<endl;
        // st.pop();
        // // cout << st.topx() << " "<<endl;




        Stack st(5);
        st.push(21);
        st.push(214);
        st.push(213);
        st.push(212);
        st.push(241);
        st.push(11);

        if (st.isEmpty())
        {
            cout<<"Stack is empty ";
        }
        else
        {
            cout<<"Stack is not empty";
        }
        return 0;
}