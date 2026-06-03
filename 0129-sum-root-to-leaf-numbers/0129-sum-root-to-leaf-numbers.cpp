class Solution {
public:
    int treverse(TreeNode* root, int num) {
        if(root == nullptr) {
            return 0;
        }
        num = num * 10 + root->val;
        if(root->left == nullptr && root->right == nullptr)
            return num;
        return treverse(root->left, num) + treverse(root->right, num);
    }
    int sumNumbers(TreeNode* root) {
        return treverse(root, 0);
    }
};