// https://www.geeksforgeeks.org/problems/vertical-sum/1

// /* Structure of binary tree node
// class Node{
// public:
//     int data;
//     Node* left, right;
//     Node(int item)
//     {
//         data = item;
//         left = nullptr;
//         right = nullptr;
//     }
// }
// */
// class Solution {
//   public:
//     void solve(Node* root, int hd, map<int,int>& mp){
//         if(root == NULL){
//             return;
//         }
//         mp[hd] += root->data;
//         solve(root->left, hd - 1, mp);
//         solve(root->right, hd + 1, mp);
//     }
//     vector<int> verticalSum(Node *root) {
//         map<int,int> mp;
//         solve(root, 0, mp);
//         vector<int> ans;
//         for(auto it : mp){
//             ans.push_back(it.second);
//         }
//         return ans;
//     }
// };