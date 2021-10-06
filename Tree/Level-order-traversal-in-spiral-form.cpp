vector<int> findSpiral(Node *root)
{
    //Your code here
    vector<int> vec;
    if (root == NULL) 
        return vec;  
    stack<Node *> s1, s2;
    
    s1.push(root);
    
    while(!s1.empty() || !s2.empty())
    {
        while(!s1.empty())
        {
            Node *curr1 = s1.top();
            s1.pop();
            vec.push_back(curr1->data);
            
            if(curr1->right != NULL) s2.push(curr1->right);
            if(curr1->left != NULL) s2.push(curr1->left);
            
        }
        
        while(!s2.empty())
        {
            Node *curr2 = s2.top();
            s2.pop();
            vec.push_back(curr2->data);
            
            if(curr2->left != NULL) s1.push(curr2->left);
            if(curr2->right != NULL) s1.push(curr2->right);
            
        }
    }
    
    return vec;
}
