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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector< vector<int> > result;

        queue<TreeNode*> list_queue;

        if(root != nullptr){
            list_queue.push(root);
        }
        

        int level = 0;

        
        while(!list_queue.empty()){
            int size = list_queue.size();
            result.push_back({});
            while(size){
                TreeNode *cur = list_queue.front();
                list_queue.pop();
                result[level].push_back(cur->val);
                if(cur->left != nullptr){
                    list_queue.push(cur->left);
                }
                if(cur->right != nullptr){
                    list_queue.push(cur->right);
                }
                size--;
            }
            level++;
        }

        return result;

    }
};
