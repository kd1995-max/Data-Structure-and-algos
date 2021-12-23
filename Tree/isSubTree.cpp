    bool ans = false;
    
    
    bool match(Node* root, Node* subRoot){
        
        if(root!=NULL && subRoot!=NULL){
            bool a = match(root->left, subRoot->left);
            bool b = match(root->right, subRoot->right);
            
            if( (root->data == subRoot->data) && a && b ){
                return true;
            }else
                return false;
        }
        else if(root==NULL && subRoot==NULL)
            return true;
        else
            return false;
    }
    
    
    void inorder(Node* root, Node* subRoot){
        if(root!=NULL){
            inorder(root->left, subRoot);
            
            bool x = match(root, subRoot);
            if(x){ans = x;}
            
            inorder(root->right, subRoot);
        }
    }
    
    bool isSubTree(Node* root, Node* subRoot) 
    {
        // Your code here
        inorder(root, subRoot);
        return ans;
    }
