int solve(Node *root, int &dia,unordered_map<Node *,int> &um)
    {
        if(!root)
        return 0;
        
        if(um.find(root) != um.end())
        return um[root];
        
        int left = solve(root->left,dia,um);
        int right = solve(root->right,dia,um);
        
        dia = max(dia,left+right+1);
        
        return um[root] = 1 + max(left , right);
    }
    int diameter(Node* root) {
        // Your code here
        int dia = 0;
        unordered_map<Node *,int> um;
        
        solve(root , dia,um);
        
        return dia;
    }
