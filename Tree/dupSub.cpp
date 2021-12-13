unordered_map<string,int> um;
    string solve(Node* root)
    {
    
        if(!root)    
        return "$";
        
        string s = "";
            
        if(!(root->left) and !(root->right))
        return to_string(root->data);
        
        s = s + to_string(root->data);
        s = s + solve(root->left);
        s = s + solve(root->right);
        
        um[s]++;
        
        return s;
    }
    
    int dupSub(Node *root) {
         // code here
         
         solve(root);
         
         for(auto a : um)
         if(a.second >= 2) return 1;
         
         return 0;
    }
