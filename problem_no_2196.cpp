// QUESION : You are given a 2D integer array descriptions where descriptions[i] = [parenti, childi, isLefti] indicates that parenti is the parent of childi in a binary tree of unique values. Furthermore,

// If isLefti == 1, then childi is the left child of parenti.
// If isLefti == 0, then childi is the right child of parenti.
// Construct the binary tree described by descriptions and return its root.

// The test cases will be gen
// https://leetcode.com/problems/create-binary-tree-from-descriptions/erated such that the binary tree is valid.


#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>

using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode() : val(0), left(nullptr), right(nullptr) {}

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}

    TreeNode(int x, TreeNode *left, TreeNode *right)
        : val(x), left(left), right(right) {}
};

class Solution {
public:
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
        unordered_map<int, TreeNode*> nodes;
        unordered_set<int> children;

        for (auto& d : descriptions) {
            int parent = d[0];
            int child = d[1];
            int isLeft = d[2];

            if (!nodes.count(parent))
                nodes[parent] = new TreeNode(parent);

            if (!nodes.count(child))
                nodes[child] = new TreeNode(child);

            if (isLeft)
                nodes[parent]->left = nodes[child];
            else
                nodes[parent]->right = nodes[child];

            children.insert(child);
        }

        for (auto& [val, node] : nodes) {
            if (!children.count(val))
                return node; // Root node
        }

        return nullptr;
    }
};

// Inorder Traversal
void inorder(TreeNode* root) {
    if (!root) return;

    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}

int main() {
    Solution obj;

    vector<vector<int>> descriptions = {
        {20, 15, 1},
        {20, 17, 0},
        {15, 10, 1},
        {15, 12, 0}
    };

    TreeNode* root = obj.createBinaryTree(descriptions);

    cout << "Inorder Traversal: ";
    inorder(root);
    cout << endl;

    return 0;
}
