#include <iostream>
#include <vector>

using namespace std;  

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

void inorderTraversal(TreeNode* root, vector<int>& result) {
    if (root) {
        inorderTraversal(root->left, result);
        result.push_back(root->val);
        inorderTraversal(root->right, result);
    }
}

vector<int> treeToVector(TreeNode* root) {
    vector<int> result;
    inorderTraversal(root, result);
    return result;
}

int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    vector<int> result = treeToVector(root);

    cout << "Values in the vector: ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
