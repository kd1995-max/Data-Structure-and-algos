vector<int> rightView(Node *root)
    {
       // Your Code here
       vector<int> vec;
        queue<Node *> q;
        
        if(root == NULL) 
        return vec;
        
        q.push(root);
        while(q.empty() == false)
        {
            int size = q.size();
            for(int i = 0; i < size; i++)
            {
                Node *curr = q.front();
                q.pop();
                
                if(i == 0)
                vec.push_back(curr->data);
                
                if(curr->right != NULL) q.push(curr->right);
                if(curr->left != NULL) q.push(curr->left);
                
            }
        }
        return vec;
    }
