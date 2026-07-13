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
vector<int> subrob(TreeNode* root){
    if(root==nullptr) return {0,0};
vector<int> right=subrob(root->right);
vector<int> left=subrob(root->left);

    vector<int> res(2);
res[0]=max(left[0],left[1])+max(right[0],right[1]);
res[1]=root->val+left[0]+right[0];
return {res[0],res[1]};


}
    int rob(TreeNode* root) {
        vector<int> res=subrob(root);
        return max(res[0],res[1]);
       
    }
};