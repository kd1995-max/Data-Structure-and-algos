void solve(Node *r1, Node *r2,bool &res)
    {
        if(!r1 || !r2)
        {
            if((r1 == NULL and r2 != NULL) || (r1 != NULL and r2 == NULL))
            {
                res = false;
                return;
            }
            
            return;
        }
        
        solve(r1->left,r2->left,res);

        if(r1->data != r2->data)
        res = false;
        
        solve(r1->right,r2->right,res);
    }
    
    bool isIdentical(Node *r1, Node *r2)
    {
        //Your Code here
        bool res = true;
        
        solve(r1,r2,res);
        
        return res;
    }
