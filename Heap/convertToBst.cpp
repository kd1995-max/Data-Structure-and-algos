// Create an array arr[] of size n, where n is the number of nodes in the given BST.
// Perform the inorder traversal of the BST and copy the node values in the arr[] in sorted order.
// Now perform the preorder traversal of the tree.
// While traversing the root during the preorder traversal, one by one copy the values from the array arr[] to the nodes.

#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left, *right;
    Node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};

void inorder(Node *root , vector<int> &v)
{
    if(root == NULL)
        return;
    inorder(root->left, v);
    v.push_back(root->data);
    inorder(root->right, v);
}

void helper(Node *root, vector<int> &v , int &idx)
{
    if(root == NULL)
        return;

    root->data = v[idx++];

    helper(root->left, v,idx);
    helper(root->right, v,idx);
}

void convertToBst(Node *root,vector<int> &v)
{
    inorder(root, v);
    int idx = 0;
    helper(root, v, idx);
}

void printTree(Node *root)
{
    if(root == NULL)
        return;
    cout<<root->data<<" ";
    printTree(root->left);
    printTree(root->right);
}

int main(int argc, char const *argv[])
{
    Node *root = new Node(4);
    root->left = new Node(2);
    root->right = new Node(6);
    root->left->left = new Node(1);
    root->left->right = new Node(3);
    root->right->left = new Node(5);
    root->right->right = new Node(7);   

    vector<int> v;
    convertToBst(root, v);
    
    printTree(root);

    return 0;
}
