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
    int countNodes(TreeNode* root) {
    if(!root) return 0;
    TreeNode *temp = root;
    int height = 0, count = 0, level;
    while(temp) {
        temp = temp->left;
        height ++;
    }
    temp = root;
    level = height - 2;
    while(level >= 0) {
        TreeNode *left = temp->left;
        for(int i = 0;i < level;i ++) {
            left = left->right;
        }
        if(left) {
            temp = temp->right;
            count += (1 << level);
        } else temp = temp->left;
        level --;
    }
    if(temp) count ++;
    return (1 << (height - 1)) + count - 1;
}
};