void printLevel(Node *root,vector<int> &vec)
    {
        if(root==NULL)
        return;
        
        queue<Node *>q;
        q.push(root);
        
        while(q.empty()==false){
            
            Node *curr=q.front();
            q.pop();
            
            vec.push_back(curr->data);
            
            if(curr->left!=NULL)
                q.push(curr->left);
            if(curr->right!=NULL)
                q.push(curr->right);
        }
    }  

    vector<int> levelOrder(Node* node)
    {
      //Your code here
      if(!node) return{};
      
      vector<int> ans;
      printLevel(node,ans);
      
      return ans;
    }
