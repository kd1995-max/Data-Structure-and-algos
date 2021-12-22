int solve(Node* root,int n,int &count)
{
    if(!root)
    return 0;
    
    int parent = root->data;
    int left = solve(root->left,n,count);
    int right = solve(root->right, n , count);
    
    int sum = parent + left + right;
    
    if(sum == n)
    count++;
    
    return sum;
}

int countSubtreesWithSumX(Node* root, int X)
{
	// Code here
	int count = 0;
	solve(root,X,count);
	
	return count;
}
