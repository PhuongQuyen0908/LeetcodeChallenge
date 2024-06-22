#include <iostream>
using namespace std;
 //Define a NODE in a BST
 struct TreeNode {
    int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };
 

class Solution {
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        if(root==NULL)
            return 0;
        int a=rangeSumBST(root->left,low,high);
        int b=rangeSumBST(root->right,low,high);
        if(root->val>=low&&root->val<=high)
            return a+b+root->val;
        else return a+b;
    }
};