vector<Node *> in;

void fill(Node *root)
{
    if(!root)
    return;
    
    fill(root->left);
    in.push_back(root);
    fill(root->right);
}

Node *solve(int start , int end)
{
    if(start > end)
    return NULL;
    
    int mid = (start  +  end)/2;
    
    Node *root = in[mid];
    
    root->left = solve(start , mid - 1);
    root->right = solve(mid + 1 , end);
    
    return root;
}
Node* buildBalancedTree(Node* root)
{
	// Code here
	in.clear();
	fill(root);
	
	return solve(0 , in.size() - 1);
}
