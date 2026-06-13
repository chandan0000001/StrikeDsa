#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int>s;
    //push poperation 
    s.push(2);
    s.push(3);
    cout<<s.top()<<" This is the top element of the stack \n";
    ///remove operation 
    s.pop();
    cout << s.top() << " This is the top element of the stack \n";
    //check empty 
    if(s.empty()){
    cout<<" Stack is empty";
    }else{
       cout<<"Stack is Not empty\n ";
    }

     cout<<"size of stack is "<<s.size()<<" ";




    return 0;
}