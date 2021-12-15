bool check(Node *root,int k)
{
    if(!root)
    return false;
    
    if(!(root->left) and !(root->right))
    {
        if(k == 0)
        return true;
        
        return false;
    }
    
    bool lh = check(root->left,k-1);
    bool rh = check(root->right,k-1);
    
    return lh || rh;
}

void inorder(Node *root, int &count, int k)
{
    if(!root)
    return;
    
    inorder(root->left, count,k);
    
    if(check(root,k)) 
    count++;
    
    inorder(root->right, count,k);
}

int printKDistantfromLeaf(Node* root, int k)
{
	//Add your code here.
	int count = 0;
	
	inorder(root,count,k);
	
	return count;
}
