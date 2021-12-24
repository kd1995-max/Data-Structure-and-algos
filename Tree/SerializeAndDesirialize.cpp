void serialize_solve(Node *root, vector<int> &ser)
    {
        if(!root)    
        {
            ser.push_back(-1);
            return;
        }
        
        ser.push_back(root->data);
        
        serialize_solve(root->left,ser);
        serialize_solve(root->right,ser);
    }
    
    vector<int> serialize(Node *root) 
    {
        //Your code here
        vector<int> res;
        
        serialize_solve(root,res);
        
        return res;
    }
    
    //Function to deserialize a list and construct the tree.
    Node* dhelper(vector<int> &A,int &ind)
    {
        if(ind >= A.size() or A.size() == 0)
            return NULL;
            
        if(A[ind] == -1)
            return NULL;
            
        Node *temp = new Node(A[ind]);
        ind ++;
        
        temp->left = dhelper(A,ind);
        
        ind++;
        
        temp->right = dhelper(A,ind);
        
        return temp;
    }
    
    Node * deSerialize(vector<int> &A)
    {
        int ind = 0;
        return dhelper(A,ind);
    }
