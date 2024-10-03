#include <iostream>
#include <climits>
using namespace std;
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
bool isBSTUtil(Node* node, int min, int max) {
    if (node == NULL)
        return true;
    if (node->data <= min || node->data >= max)
        return false;
    return isBSTUtil(node->left, min, node->data) && 
           isBSTUtil(node->right, node->data, max);
}
bool isBST(Node* root) {
    return isBSTUtil(root, INT_MIN, INT_MAX);
}
int main() {
    Node* root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(20);
    root->left->left = new Node(2);
    root->left->right = new Node(8);
    if (isBST(root))
        cout << "The tree is a BST" << endl;
    else
        cout << "The tree is not a BST" << endl;
    return 0;
}

