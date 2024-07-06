#include <vector>
#include <iostream>

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// Function to insert a new value into the BST
TreeNode* insertIntoBST(TreeNode* root, int val) {
    if (root == nullptr) {
        return new TreeNode(val);
    }

    if (val < root->val) {
        root->left = insertIntoBST(root->left, val);
    } else {
        root->right = insertIntoBST(root->right, val);
    }

    return root;
}

// Function to build a BST from an array
TreeNode* buildBSTFromArray(const std::vector<int>& arr) {
    TreeNode* root = nullptr;
    for (int val : arr) {
        root = insertIntoBST(root, val);
    }
    return root;
}

// Helper function to print the tree in order (for testing purposes)
void inorderPrint(TreeNode* root) {
    if (!root) return;
    inorderPrint(root->left);
    std::cout << root->val << " ";
    inorderPrint(root->right);
}

int main() {
    std::vector<int> arr = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};
    TreeNode* root = buildBSTFromArray(arr);
    inorderPrint(root);  // This should print the values in ascending order
    return 0;
} 