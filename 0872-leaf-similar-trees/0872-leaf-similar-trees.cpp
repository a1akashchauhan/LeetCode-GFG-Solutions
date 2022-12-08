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
// Time Complexity : O(n)
// Space Complexity : O(n+n)


class Solution {
public:

    void dfs(TreeNode* root,vector<int>&v){
        // base condition
        if(root == NULL) return;
        //condition.
        if(root->left == NULL && root->right == NULL) {
            v.push_back(root->val);
            return;
        }
        dfs(root->left,v);
        dfs(root->right,v);
    }

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {

        vector<int>tree1;
        vector<int>tree2;

        dfs(root1,tree1);
        dfs(root2,tree2);

        return tree1 == tree2;
    }
};