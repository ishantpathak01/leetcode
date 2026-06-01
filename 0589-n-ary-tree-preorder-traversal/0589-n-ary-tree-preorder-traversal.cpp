class Solution {
public:
    void preorderr(Node* root, vector<int>& result) {
        if (root == NULL) return;
        result.push_back(root->val);
        for (int i = 0; i < root->children.size(); i++) {
            preorderr(root->children[i], result);
        }
    }
    vector<int> preorder(Node* root) {
        vector<int> result;
        preorderr(root, result);
        return result;
    }
};