unordered_map<Node*, int> mp;

    int func(Node* root)
    {
    	if(!root)
    	return 0;
    	
    	if(mp[root]) return mp[root];
    	
    	int inc = root->data;
    	
    	if(root->left)
    	{
    		inc += func(root->left->left);
    		inc += func(root->left->right);
    	}
    	if(root->right)
    	{
    		inc += func(root->right->left);
    		inc += func(root->right->right);
    	}
    	
    	int exc = func(root->left) + func(root->right);
    	
    	mp[root] = max(inc , exc);
    	
    	return mp[root];
    }
    int getMaxSum(Node *root) 
    {
        // Add your code here
        return func(root);
    }
