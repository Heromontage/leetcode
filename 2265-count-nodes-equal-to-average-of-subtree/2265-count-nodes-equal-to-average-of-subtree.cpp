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
    pair<int,int> help(TreeNode* root,int& count){
        if(root==NULL){
            return {0,0};
        }
        pair<int,int>left = help(root->left,count);
        pair<int,int>right = help(root->right,count);

        int size = 1+left.first+right.first;
        int sum = root->val+left.second+right.second;

        if(root->val == sum/size){
            count++;
        }
        return {size,sum};
    }

    int averageOfSubtree(TreeNode* root) {
        int count = 0;
        help(root,count);
        return count;
    }
};