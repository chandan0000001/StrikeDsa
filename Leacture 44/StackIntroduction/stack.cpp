#include <iostream>
using namespace std;
class Stack{
    public:
    int arr[100];
    int index;

    //use constructor 
    Stack(){
        // initilize index = -1
        index=-1;
    }


    //push function created 
    void push (int val){
        if(index==99){
            cout<<"Stack Overflow\n";
        }
        else{
            //arrary ko agee lo 
            index++;
            // array ke index ke anda r value ko dalo 
            arr[index]=val;
            cout<<val<<" Value Pushed into Stack\n";
        }
    }


    //delete the element 
    void pop(){
        if(index==-1){
            cout<<"Stack is Underflow";
        }
        else{
            cout<<arr[index]<<" Popped from Stack like your girlfriend removed from your life\n";
            index--;
        }
    }



    //finde the top element 
    int top(){
        return arr[index];
    }
   //imagine top handle this case there element not exist 
   //we need to call first empty()  then think about top()  agar empty he top walo ko call nahii karunga 
    bool empty(){
        return index==-1;
    }
//size of the element ;
    int size(){
        return index+1;
    }
};



int main(){
    // cout <<"Namste Radha ji ";

        Stack s;
        s.push(10);
        s.push(30);
        // cout<<s.size()<<"\n";
        // cout<<s.top()<< "\n";
        // cout<<s.empty()<<"\n";


        s.pop();
        s.pop();
        s.pop();
        cout<<s.empty()<<"\n";

        return 0;
}