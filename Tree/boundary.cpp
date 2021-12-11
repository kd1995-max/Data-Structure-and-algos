void LeftTree(Node *root, vector<int> &ans)
    {
    	if(!root)
    	return;
    	
    	if(root->left)
    	{
    	    ans.push_back(root->data);
    		LeftTree(root->left,ans);
    	}
    	else if(root->right)
    	{
    	    ans.push_back(root->data);
    		LeftTree(root->right,ans);
    	}
    }
    
    void Leaf(Node* root, vector<int> &ans)
    {
    	if(!root)
    	return;
    	Leaf(root->left,ans);
    
    	if(!root->left and !root->right)
    	ans.push_back(root->data);
    	
    	Leaf(root->right,ans);
    }
    
    void RightTree(Node *root, vector<int> &ans)
    {
    	if(!root)
    	return;
    	
    	if(root->right)
    	{
    		RightTree(root->right,ans);
    		ans.push_back(root->data);
    	}
    	else if(root->left)
    	{
    		RightTree(root->left,ans);
    		ans.push_back(root->data);
    	}
    }
    
    vector <int> boundary(Node *root)
    {
        //Your code here
        vector<int> ans;
    	ans.push_back(root->data);
    	
    	LeftTree(root->left,ans);
    	Leaf(root,ans);
    	RightTree(root->right,ans);
    	
    	return ans;
    }
