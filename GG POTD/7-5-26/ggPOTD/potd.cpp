// https://www.geeksforgeeks.org/problems/check-if-subtree/1

/*
Definition for Node
struct Node
{
    int data;
    Node* left;
    Node* right;

    Node(int x){
        data = x;
        left = right = nullptr;
    }
};
*/

// class Solution {
// public:

//     bool isSame(Node* root1 , Node* root2){
        
//         // dono NULL
//         if(!root1 && !root2){
//             return true;
//         }
        
//         // ek NULL aur dusra not NULL
//         if(!root1 || !root2){
//             return false;
//         }
        
//         // value check + left + right
//         return (root1->data == root2->data) &&
//                isSame(root1->left , root2->left) &&
//                isSame(root1->right , root2->right);
//     }

//     bool isSubTree(Node* root1, Node* root2) {
        
//         // empty subtree always true
//         if(!root2){
//             return true;
//         }
        
//         // main tree khatam
//         if(!root1){
//             return false;
//         }
        
//         // current node se same tree mila
//         if(isSame(root1 , root2)){
//             return true;
//         }
        
//         // left ya right me search karo
//         return isSubTree(root1->left , root2) ||
//                isSubTree(root1->right , root2);
//     }
// };