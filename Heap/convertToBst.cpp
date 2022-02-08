void toMinHeap(BinaryTreeNode *root, vector<int> &vec ,int &idx)
{
    if(!root)
        return;
   	root->data = vec[idx++];
    toMinHeap(root->left,vec,idx);
    toMinHeap(root->right,vec,idx);
}

void inorder(BinaryTreeNode *root, vector<int> &vec)
{
    if(!root)
        return;
   	
    inorder(root->left,vec);
    vec.push_back(root->data);
    inorder(root->right,vec);
}
BinaryTreeNode* convertBST(BinaryTreeNode* root)
{
	// Write your code here.
    vector<int> vec;
    inorder(root,vec);
    int idx = 0;
    toMinHeap(root,vec,idx);
    
    return root;
}
