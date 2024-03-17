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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
       vector<vector<int>> ans;
        if(root==NULL) return ans;
        bool flag=true;
        queue<TreeNode*> que;
        que.push(root);
        
        while(!que.empty()){
            int size=que.size();
            vector<int> row(size);
            for(int i=0;i<size;i++){
                TreeNode* temp=que.front();
                que.pop();
                
                int index= flag ? i: size-i-1;
                row[index]=temp->val;
                
                if(temp->left) que.push(temp->left);
                
                if(temp->right) que.push(temp->right);
            }
            flag = !flag;
            ans.push_back(row);
            
        }
        return ans;
        
    }
};