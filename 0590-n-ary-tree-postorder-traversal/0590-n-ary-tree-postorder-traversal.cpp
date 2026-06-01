class Solution {
public:
    void postorderr(Node* root, vector<int>& result) {
        if (root == NULL) return;
        for (int i = 0; i < root->children.size(); i++) {
            postorderr(root->children[i], result);
        }
        result.push_back(root->val);
    }
    vector<int> postorder(Node* root) {
        vector<int> result;
        postorderr(root, result);
        return result;
    }
};