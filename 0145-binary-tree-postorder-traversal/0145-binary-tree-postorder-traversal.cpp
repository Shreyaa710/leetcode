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

    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        if(root== NULL) return ans;
        stack<TreeNode*> st1;
        stack<TreeNode*> st2;
        TreeNode *curr=root;
        st1.push(curr);
        while(!st1.empty()){
            curr=st1.top();
            st1.pop();
            st2.push(curr);
            if(curr->left != NULL) st1.push(curr->left);
            if(curr->right != NULL) st1.push(curr->right);
        }
        
        while(!st2.empty()){
            curr=st2.top();
            ans.push_back(curr->val);
            st2.pop();
        }
        return ans;
    }
};