#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    // constructor
    Node(int value)
    {
        data = value;
        next = NULL;
    }
};
int main()
{
    int arr[5] = {10, 12, 15, 20, 11};
    Node *Head = NULL;
    for (int i = 0; i < 5; i++)
    {
        if (!Head)
        {
            Head = new Node(arr[i]);
        }
        else
        {
            Node *temp = new Node(arr[i]);
            temp->next = Head;
            Head = temp;
        }
    }

    // how to delete a node in linked list



//     // delete the first node
//     Node *Temp = Head;
//     Head = Head->next;
//     delete Temp;
// //  Print after the delte occured 
//     Node *print = Head;
//     while (print){
//         cout << print->data << ",";
//         print = print->next;
//     }



//delete the last node 
//  Node *Temp = Head;
//   Node *prev = NULL;
//   while(Temp->next!=NULL){
//     prev=Temp;
//     Temp=Temp->next;
//   }

//   prev->next=NULL;
//   delete Temp;
//     Node *print = Head;
//     while (print){
//         cout << print->data << ",";
//         print = print->next;
//     }


// delete the 4th node
    //basic idea go to third node make it point to the and point to the 5th node and delete the 4th node 
    // Node *temp = Head;
    // int n = 3;// 4 is 0 based 
    // while(--n){
    //     temp=temp->next;
    // }
    // Node *prev = temp->next;
    // temp->next=prev->next;
    // delete prev;
    // Node *print = Head;
    // while (print){
    //     cout << print->data << ",";
    //     print = print->next;
    // }


    return 0;
}