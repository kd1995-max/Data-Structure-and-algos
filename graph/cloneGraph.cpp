void dfs(Node *node, Node *copy, vector<Node *> &vis)
    {
        vis[copy->val] = copy;
        
        for(auto nbr : node->neighbors)
        {
            if(!vis[nbr->val])
            {
                Node *newNode = new Node(nbr->val);
                (copy->neighbors).push_back(newNode);
                dfs(nbr,newNode,vis);
            }
            else
            {
                (copy->neighbors).push_back(vis[nbr->val]);
            }
        }
    }
    
    Node* cloneGraph(Node* node) {
        if(node == NULL)
        return node;
        
        vector<Node *> vis(101, NULL);
        
        Node *copy = new Node(node->val) ;
        
        dfs(node,copy,vis);
        
        return copy;
    }
