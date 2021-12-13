string solve(Node* root,unordered_map<string,int> &um)
    {
    
        if(!root)    
        return "";
        
        string s = "";
            
        if(!(root->left) and !(root->right))
        return to_string(root->data);
        
        s = s + to_string(root->data);
        s = s + solve(root->left,um);
        s = s + solve(root->right,um);
        
        um[s]++;
        
        return s;
    }
    
    int dupSub(Node *root) {
         // code here
        unordered_map<string,int> um; 
         solve(root , um);
         
         for(auto a : um)
         if(a.second >= 2) return 1;
         
         return 0;
    }
