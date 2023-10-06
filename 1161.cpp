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
    map<int, int> map;
    int level = 0;
    int ret = 1;
    int max;
    int maxLevelSum(TreeNode* root) {
        if(!root or (!root->left and !root->right)) return 1;
        sum(root);
        max = root->val;
        for(auto it = map.begin(); it != map.end(); it++){
            if(it->second > max) {
                max = it->second;
                ret = it->first;
            }
        }
        return ret;

    }
    void sum(TreeNode* root){
        if(!root) return;
        level += 1;
        map[level] += root->val;
        sum(root->left);
        sum(root->right);
        level -= 1;

    }
};
