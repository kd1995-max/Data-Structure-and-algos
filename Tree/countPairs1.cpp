int c = 0;
    bool fetch(Node* root2,int k)
    {
        if(!root2)
        return false;
        
        if(k == root2->data)
        return true;
        
        bool x = false;
        bool y = false;
        
        if(k < root2->data)
        x = fetch(root2->left , k);
        
        else if(k > root2->data)
        y = fetch(root2->right , k);
        
        return x or y;
        
    }
    
    void solve(Node *root1, Node *root2, int k)
    {
        if(!root1)   
        return;
        
        solve(root1->left, root2 , k);
        
        if(fetch(root2 , k - root1->data ))
        c++;
        
        solve(root1->right, root2 ,k);
    }

    int countPairs(Node* root1, Node* root2, int x)
    {
        c = 0;
        
        solve(root1,root2,x);
        
        return c;
    }
