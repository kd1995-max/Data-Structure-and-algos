class Solution {
  public:
    // Function to return a list containing the inorder traversal of the tree.
    vector<int> vec;
    vector<int> inOrder(Node* root) {
        // Your code here
        
        if(root != NULL)
        {
            inOrder(root->left);
            vec.push_back(root->data);
            inOrder(root->right);
        }
        return vec;
    }
};
