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
    
    int findDiameter(TreeNode *curr, int& diameter)
{
    if(curr== NULL) return 0;

    int lh=findDiameter(curr->left, diameter);
    int rh=findDiameter(curr->right, diameter);

    diameter=max(diameter,lh+rh);

    return 1+ max(lh,rh);
}
    
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter=0;
        findDiameter(root,diameter);
        return diameter;
    }
};