vector<int> findSpiral(Node *root)
{
    //Your code here
    if(!root)
    return {};
    
    stack<int> s;
    
    queue<Node *> q;
    q.push(root);
    
    vector<int> vec;
    bool flag = true;
    
    while(!q.empty())
    {
        int n = q.size();
        
        for(int i = 0; i < n; i++)
        {
            Node* curr = q.front();
            q.pop();
            
            if(!flag)
            {
                vec.push_back(curr->data);
            }
            else
            {
                s.push(curr->data);
            }
            if(curr->left)
            q.push(curr->left);
            if(curr->right)
            q.push(curr->right);
        }
        
        while(flag && !s.empty())
        {
            vec.push_back(s.top());
            s.pop();
        }
        
        flag = !flag;
        
    }
    
    return vec;
}
