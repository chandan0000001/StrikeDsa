// GG https://www.geeksforgeeks.org/problems/subtraction-in-linked-list/1

// class Solution {
//   public:  
// Node *removestarting0(Node *head){
//     while(head && head->next && head->data == 0 ){
//         Node *temp = head;
//         head=head->next;
//         delete temp;
//     }
//     return head;
// }
// int getLength(Node *head){
//     int count=0;
//     while(head){
//         count++;
//         head=head->next;
//     }
//     return count;
// }
// int isFirstBigger(Node *head1,Node *head2){
//     //chcek both leght which is big 
//     int len1 = getLength(head1);
//     int len2 = getLength(head2);
//     //chek karo konsa badda he 
//     if(len1>len2){
//         return 1;
//     }
//     else if(len2>len1){
//         return 0;
//     }else{
//         while(head1){
//             if(head1->data > head2->data){
//                 return 1; //similar with the l1 bigger case 
//             }else if(head2->data>head1->data){
//                 return 0; //similar with l2 bigger case 
//             }
//             head1=head1->next;
//             head2=head2->next;
//         }
//         //upar loop nahi chalye to 2 return hoga 
//         return 2;
//     }

// }

// Node *reverse(Node *head){
//     Node *prev = NULL , *curr= head , *fut=NULL;
//     while(curr){
//         fut=curr->next;
//         curr->next=prev;
//         prev=curr;
//         curr=fut;
//     }
//     return prev;
// }
// Node* subLinkedList(Node* l1, Node* l2) {
//     //l1 aur L2 dono ko reverse karo 
//     l1 = removestarting0(l1);
//     l2 = removestarting0(l2);
//     //check which is bigger jaoo bhii karo l1 pe ssabse bade ko lana he 
//     int whichGreater = isFirstBigger(l1,l2);
//     // if whichGreater == 1   nahi chedd na he kyu ki l1 badda he 
//     if(whichGreater==0){
//         //ye condition dikahata  he ki agar l2 bada he usse l1 ko switch karo 
//         swap(l1,l2);
//     }else if(whichGreater == 2){
//         return new Node(0);
//     }
//     //ab dono ko karo reverse ;
//     l1=reverse(l1);
//     l2=reverse(l2);


// //delcalr karo result namak node ko and then borro ko initilize karo 0 se 
// Node *result = NULL;
// int borrow = 0;
//     //l1 ke sath khellna he kyu ki l1 sabse bada banaya he hammne 
//     while(l1){
//         int val1= l1->data;
//         // 
//         int val2 = 0;
//          if(l2){
//             val2 = l2->data; }    

//         int diff = val1-val2-borrow;
//         // agar diff -ve ho then
//         if(diff<0){
//             borrow=1;
//             diff=diff+10;
//         }else{
//             borrow=0;
//         }
//         //now set the result step
//         Node *temp = new Node(diff);
//         temp->next=result;
//         result = temp;

//         //l1 ko age badahao 
//         l1=l1->next;
//         //agar l2 exist karata ho then usko agae baahdao 
//         if(l2){
//             l2=l2->next;
//         }else {l2 = 0;}

//         //result kee samne jo 0 presesent he unko remove karo     0098   remove 0 and make it 98 

       
//     }
//      return removestarting0(result);
// }
// };




// //STRIKE https://strikes.in/practice/68c14f2068525df7716d78ff

// // struct Node {
// //     int data;
// //     Node* next;
// //     Node(int d) : data(d), next(nullptr) {}
// // };
// Node *removestarting0(Node *head){
//     while(head && head->next && head->data == 0 ){
//         Node *temp = head;
//         head=head->next;
//         delete temp;
//     }
//     return head;
// }
// int getLength(Node *head){
//     int count=0;
//     while(head){
//         count++;
//         head=head->next;
//     }
//     return count;
// }
// int isFirstBigger(Node *head1,Node *head2){
//     //chcek both leght which is big 
//     int len1 = getLength(head1);
//     int len2 = getLength(head2);
//     //chek karo konsa badda he 
//     if(len1>len2){
//         return 1;
//     }
//     else if(len2>len1){
//         return 0;
//     }else{
//         while(head1){
//             if(head1->data > head2->data){
//                 return 1; //similar with the l1 bigger case 
//             }else if(head2->data>head1->data){
//                 return 0; //similar with l2 bigger case 
//             }
//             head1=head1->next;
//             head2=head2->next;
//         }
//         //upar loop nahi chalye to 2 return hoga 
//         return 2;
//     }

// }

// Node *reverse(Node *head){
//     Node *prev = NULL , *curr= head , *fut=NULL;
//     while(curr){
//         fut=curr->next;
//         curr->next=prev;
//         prev=curr;
//         curr=fut;
//     }
//     return prev;
// }
// Node* subtractLinkedLists(Node* l1, Node* l2) {
//     //l1 aur L2 dono ko reverse karo 
//     l1 = removestarting0(l1);
//     l2 = removestarting0(l2);
//     //check which is bigger jaoo bhii karo l1 pe ssabse bade ko lana he 
//     int whichGreater = isFirstBigger(l1,l2);
//     // if whichGreater == 1   nahi chedd na he kyu ki l1 badda he 
//     if(whichGreater==0){
//         //ye condition dikahata  he ki agar l2 bada he usse l1 ko switch karo 
//         swap(l1,l2);
//     }else if(whichGreater == 2){
//         return new Node(0);
//     }
//     //ab dono ko karo reverse ;
//     l1=reverse(l1);
//     l2=reverse(l2);


// //delcalr karo result namak node ko and then borro ko initilize karo 0 se 
// Node *result = NULL;
// int borrow = 0;
//     //l1 ke sath khellna he kyu ki l1 sabse bada banaya he hammne 
//     while(l1){
//         int val1= l1->data;
//         // 
//         int val2 = 0;
//          if(l2){
//             val2 = l2->data; }    

//         int diff = val1-val2-borrow;
//         // agar diff -ve ho then
//         if(diff<0){
//             borrow=1;
//             diff=diff+10;
//         }else{
//             borrow=0;
//         }
//         //now set the result step
//         Node *temp = new Node(diff);
//         temp->next=result;
//         result = temp;

//         //l1 ko age badahao 
//         l1=l1->next;
//         //agar l2 exist karata ho then usko agae baahdao 
//         if(l2){
//             l2=l2->next;
//         }else {l2 = 0;}

//         //result kee samne jo 0 presesent he unko remove karo     0098   remove 0 and make it 98 

       
//     }
//      return removestarting0(result);
// }