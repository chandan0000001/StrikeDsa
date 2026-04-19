// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node *next;
//     //crette a constructor
//     Node (int value){
//         data=value;
//         next=NULL;
//     }
// };
// int main(){
//     // //create a node static type
//     // // Node n1(20); 
//     // //create a node dynamic ttpe
//     // Node *Head;
//     // Head=new Node(40);
//     // cout<<Head->data<<endl;
//     // cout<<Head->next<<endl;



//     return 0;
// }





#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node (int value){
        data=value;
        next=NULL;
    }
};
int main(){
    //given array = 2,4,6,3 
    //insert this isnto linkedlist @ beginneing 
    int arr []={2,4,6,3};
    Node *Head=NULL;

    for(int i =0 ;i <4;i++){
          //linkedlist diesnot exist 
    if(Head==NULL){
        Head=new Node(arr[i]);
    }
    //linkedlist is exist 
    else{
        Node *Temp;
        //temp wala crate hua and usko new node p0int karrio banao dynamicaly 
        Temp=new Node(arr[i]);
        // temp jisko point karr raha he uske  next pe  head jisko point karr rhaa he usse dalo 
        Temp->next=Head;
        //temp jisko point karr aha he uska adress head se point karao 
        Head=Temp;
      }
    }

    //print the value 
    Node *temp=Head;
    while(temp!=NULL){
        //temp aur head ekk ko point kara o 
        //temp ke data ko print karoo 
        cout<<temp->data<<",";
        //temp ko re edit karoo next aderess se 
        temp=temp->next;
    }
  
    
    return 0;
}