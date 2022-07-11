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
    void traverse(TreeNode* root, int h, int &maxH, vector<int> & ans){
        if(!root) return ;
        if(h>maxH)
        {
            ans.push_back(root->val);
            maxH= h;
        }
        traverse(root->right, h+1, maxH, ans);
        traverse(root->left, h+1, maxH, ans);
    }
    vector<int> rightSideView(TreeNode* root) {
        if(!root) return {};
        vector<int> ans;
        int maxH=0;
        ans.push_back(root->val);
        traverse(root, 0, maxH , ans);
        return ans;
    }
};