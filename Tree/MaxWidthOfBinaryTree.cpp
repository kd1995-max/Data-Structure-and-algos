class Solution {
  public:
    // Function to get the maximum width of a binary tree.
    int getMaxWidth(struct Node* root) {
    // code here
    queue<Node *> q;
    q.push(root);
    
    int max_node = 0;
    int curr_level = 0;
    
    while(q.empty() == false)    
    {
        curr_level = 0;
        int count = q.size();
        
        for(int i = 0; i <count; i++)
        {
            Node* curr = q.front();
            q.pop();
            
            curr_level++;
            
            if(curr->left != NULL)
            q.push(curr->left);
            if(curr->right != NULL)
            q.push(curr->right);
        }
        max_node = max (max_node,curr_level);
    }
    
    return max_node;
}
