    vector<int> solve(Node* root)
    {
        if(!root)    
        return {1 , 0 , INT_MAX , INT_MIN};
        
        if(!(root->left) and !(root->right))
        return {1 , 1 , root->data,root->data};
        
        vector<int> lh = solve(root->left);
        vector<int> rh = solve(root->right) ;
        
        if(lh[0] and rh[0])
        {
            if(root->data > lh[3] and root->data < rh[2])
            {
                int x = lh[2];
                int y = rh[3];
                
                if(x == INT_MAX) x = root->data;
                if(y == INT_MIN) y = root->data;
                
                return {1 , rh[1] + lh[1] + 1, x,y};
           }
        }
        
        return {0 , max(lh[1],rh[1]) , 0 , 0};
    }
    
    int largestBst(Node *root)
    {
    	//Your code here
    	vector<int> ans = solve(root);
    	
    	return ans[1];
    }
