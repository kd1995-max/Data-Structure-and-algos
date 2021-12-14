Node *LCA(Node *root, int n1,int n2)
    {
    	if(!root)
    	return NULL;
    	
    	if(root->data == n1 or root->data == n2)
    	return root;
    	
    	Node* lh = LCA(root->left,n1,n2);
    	Node* rh = LCA(root->right,n1,n2);
    	
    	if(lh and rh)
    	return root;
    	
    	if(lh)
    	return lh;
    	else
    	return rh;
    }


    int solve(Node *root, int val)
    {
    	if(!root)
    	return 0;
    	
    	if(root->data == val)
    	return 1;
    	
    	int a = solve(root->left,val);
    	int b = solve(root->right,val);
    	
    	if(!a and !b)
    	return 0;
    	
    	else 
    	return a+b+1;
    }
    
    int findDist(Node* root, int a, int b) {
        
        // Your code here
        Node *lca = LCA(root,a,b);
        
        int x = solve(lca,a);
        int y = solve(lca,b);
        
        return x + y - 2;
    }
