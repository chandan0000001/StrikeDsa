// GG https://www.geeksforgeeks.org/problems/remove-duplicates-from-an-unsorted-linked-list/1

/*
The structure of linked list is the following

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/



// class Solution {
//   public:
//     Node *removeDuplicates(Node *head) {
//         //handle the base case 
//         if(!head || !head->next) return head;
//         Node *prev = NULL , *curr = head;
//         //declare the map 
//         map<int,bool> visited;
//         while(curr){
//             //Loop milne ki condition 
//             if(visited[curr->data] == true){ //true he ya false he compare kar rahehhe hee 
//             //agar true he to phir chalo bhaii delete karrte he 
//                 prev->next = curr->next;
//                 delete curr;
//                 curr = prev->next;
//             }else{
//                 visited[curr->data] = true; //true store karrr te he 
//                 //element ko age badahate he 
//                 prev = curr;
//                 curr = curr->next;
//             }
//         }

//         return head;
//     }
// };