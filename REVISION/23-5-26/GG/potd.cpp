// https://www.geeksforgeeks.org/problems/transform-to-sum-tree/1

/* Structure for Tree Node
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

// class Solution {
//   public:
//     int solve(Node* root){
//         if(root == NULL){
//             return 0;
//         }
//         int left = solve(root->left);
//         int right = solve(root->right);
//         int oldValue = root->data;
//         root->data = left + right;
//         return oldValue + root->data;
//     }
//     void toSumTree(Node *root) {
//         solve(root);
//     }
// };