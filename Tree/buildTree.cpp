int idx;
    unordered_map<int , int > m;
    
    Node *solve(int in[], int post[], int lb, int ub)
    {
     if(lb > ub)    
     return NULL;
     
     Node* res = new Node(post[idx--]);https://ideone.com/https://ideone.com/
     
     if(lb == ub)   return res;
     
     int mid = m[res->data];
     
     res->right = solve(in , post, mid + 1 , ub);
     res->left = solve(in , post, lb, mid - 1);
     
     
     return res;
    }
    
    Node *buildTree(int in[], int post[], int n) 
    {
    // Your code here
    idx = n - 1;
    m.clear();
    for(int i = 0; i < n; i++)
    {
        m[in[i]] = i;
    }
    Node* head = solve(in , post, 0, n - 1);
    return head;
}
