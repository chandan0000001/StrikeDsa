// https://www.geeksforgeeks.org/problems/size-of-binary-tree/1


/*
Definition for Node
struct Node {
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
// class Solution {
// public:
//     int getSize(Node* root) {
//         // base case handle it otherwise you will die 
//         if(root == NULL){
//             return 0;
//         }
        
//         // left subtree size + right subtree size + current node 
//         return 1 + getSize(root->left) + getSize(root->right);
//     }
// };