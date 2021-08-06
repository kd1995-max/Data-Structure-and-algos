class Solution{
    public:
    int idx = 0;
    unordered_map<int , int > m;
    Node *solve(int in[], int pre[], int lb, int ub)
    {
     if(lb > ub)    return NULL;
     Node* res = new Node(pre[idx++]);
     if(lb == ub)   return res;
     int mid = m[res->data];
     res->left = solve(in , pre, lb, mid - 1);
     res->right = solve(in , pre, mid + 1 , ub);
     return res;
    }
    
    Node* buildTree(int in[],int pre[], int n)
    {
        idx = 0;
        m.clear();
        for(int i = 0; i < n; i++)
        {
            m[in[i]] = i;
        }
        Node* head = solve(in , pre, 0, n - 1);
        return head;
    }
};
