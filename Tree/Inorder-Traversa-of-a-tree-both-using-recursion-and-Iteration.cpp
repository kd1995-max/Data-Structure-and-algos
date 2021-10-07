vector<int> inOrder(Node* root) {
        // Your code here
        vector<int> vec;
        
        stack<Node *> s;
        Node *curr = root;
        while(curr!=NULL || s.empty() == false)
        {
            while(curr != NULL)
            {
                s.push(curr);
                curr=curr->left;
            }
            
            curr = s.top();
            s.pop();
            vec.push_back(curr->data);
            curr=curr->right;
        }
        
        return vec;
    }
