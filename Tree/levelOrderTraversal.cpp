class Solution
{
    public:
    //Function to return the level order traversal of a tree.
     int countHeight(Node* node)
    {
        if(node == NULL)
        {
            
            return 0;
        }
        return max(countHeight(node -> left),countHeight(node -> right)) + 1;
    }
    void nodeAtGivenDistance(Node* root, vector<int>&vec, int k)
    {
      if(root == NULL) return;
        
        if(k == 0)
        {
            vec.push_back(root->data);
        }
        else
        {
            nodeAtGivenDistance(root->left,vec,k-1);
            nodeAtGivenDistance(root->right,vec,k-1);
        }
    }
    vector<int> levelOrder(Node* node)
    {
      //Your code here
      int count = 0;
        count = countHeight(node);
        vector<int> vec;
        for(int i = 0; i < count; i++)
        {
            nodeAtGivenDistance(node,vec,i);
        }
        
        return vec;
    }
};
