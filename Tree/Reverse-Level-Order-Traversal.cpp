vector<int> reverseLevelOrder(Node *root)
{
    // code here
    vector<int> ans;
    if(!root)
    return ans;
    
    queue<Node *> q;
    q.push(root);
    while(!q.empty()){
        Node *t = q.front();
        q.pop();
        
        ans.push_back(t->data);
        if(t->right) q.push(t->right);
        if(t->left) q.push(t->left);
    }
    reverse(ans.begin(),ans.end());
    
    return ans;
}
