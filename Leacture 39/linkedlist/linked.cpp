// #include<iostream>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node *next;
//     //create constrouctern
//     Node(int value,Node*adress){
//         data = value;
//         next=adress;
//     }
// };

// int main(){
//     Node n1(10,NULL);
//     cout<<n1.data;


//     return 0;
// }


#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
};
int main(){
    //without constructor 
    Node n1;
    n1.data=20;
    n1.next=NULL;
    cout<<n1.data;
    return 0;
}