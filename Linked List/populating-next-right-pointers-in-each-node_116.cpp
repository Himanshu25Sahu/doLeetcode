
class Solution {
public:
    void doConnect(Node* root) {
        if (!root->left && !root->right)
            return;

        if (root->left && root->right) {
            root->left->next = root->right;
        }
        if (root->next) {

            root->right->next = root->next->left;
        }
        doConnect(root->left);
        doConnect(root->right);
    }

    Node* connect(Node* root) {
        if (root == NULL)
            return NULL;
        doConnect(root);
        return root;
    }
};
