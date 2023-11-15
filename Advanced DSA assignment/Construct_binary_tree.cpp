/* Construct a binary tree from a given set of integer values.
Find inorder, preorder, and postorder traversal of the tree.
Delete a few elements from the tree.
Again, find the inorder, preorder, and postorder traversal of the tree. */

#include <iostream>
using namespace std;
struct Node {
int key;
Node *left, *right;
};
// Function to create a new Node
Node* newNode(int item) {
Node* temp = new Node;
temp->key = item;
temp->left = temp->right = nullptr;
return temp;
}
// Function to insert a new Node with a given key
Node* insert(Node* root, int key) {
if (root == nullptr) return newNode(key);
if (key < root->key)
root->left = insert(root->left, key);
else if (key > root->key)
root->right = insert(root->right, key);
return root;
}
// Inorder traversal
void inorder(Node* root) {
if (root != nullptr) {
inorder(root->left);
cout << root->key << " ";
inorder(root->right);
}
}
// Preorder traversal
void preorder(Node* root) {
if (root != nullptr) {
cout << root->key << " ";
preorder(root->left);
preorder(root->right);
}
}

// Postorder traversal
void postorder(Node* root) {
if (root != nullptr) {
postorder(root->left);
postorder(root->right);
cout << root->key << " ";
}
}
Node* minValueNode(Node* node) {
Node* current = node;
while (current && current->left != nullptr)
current = current->left;
return current;
}
// Function to delete the key in the tree
Node* deleteNode(Node* root, int key) {
if (root == nullptr) return root;
if (key < root->key)
root->left = deleteNode(root->left, key);
else if (key > root->key)
root->right = deleteNode(root->right, key);
else {
if (root->left == nullptr) {
Node* temp = root->right;
delete root;
return temp;
} else if (root->right == nullptr) {
Node* temp = root->left;
delete root;
return temp;
}
Node* temp = minValueNode(root->right);
root->key = temp->key;
root->right = deleteNode(root->right, temp->key);
}
return root;
}
