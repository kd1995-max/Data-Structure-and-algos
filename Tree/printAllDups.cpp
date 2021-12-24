string solve(Node* root , unordered_map<string,int> &ma , vector<Node*> &ans)
{
    if(root==NULL)
    return "";
    
    string left = solve(root->left, ma , ans );
    string right = solve(root->right, ma , ans);
    
    char parent = root->data ;
 
    string res = left + parent + right;
 
    
    if(ma.find(res)!=ma.end())
    {
        if(ma[res]==1)
        {
            ans.push_back(root);
        }
    }
    
    ma[res]++;
    
    return res;
    
    
}

vector<Node*> printAllDups(Node* root)
{
    vector<Node*> ans;
    
    if(root==NULL)
    return ans;
    
    unordered_map<string,int> ma;
    
    solve(root , ma , ans );
    
    return ans;
    
}
