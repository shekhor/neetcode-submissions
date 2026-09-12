/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    int findNumbers(TreeNode* root, int max_num){
        if(root == nullptr){
            return 0;
        }

        int count = 0;
        if(root->val >= max_num){
            count = count + 1 + findNumbers(root->left, root->val) + findNumbers(root->right, root->val);
        }else{
            count = count + findNumbers(root->left, max_num) + findNumbers(root->right, max_num);
        }

        return count;
    }
    int goodNodes(TreeNode* root) {
        return findNumbers(root, 0);
    }
};
