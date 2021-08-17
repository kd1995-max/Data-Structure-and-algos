class Solution{
  public:
    // root : the root Node of the given BST
    // target : the target sum
    int TragetSum(Node *root , int sum, unordered_set<int> &s)
    {
        if(root == NULL)
        return 0;
        
        if(TragetSum(root->left , sum, s) == 1)
        return 1;
        if(s.find(sum - root->data) != s.end())
        return 1;
        else
        s.insert(root->data);
        
        return TragetSum(root->right, sum, s);
    }
    int isPairPresent(struct Node *root, int target)
    {
    //add code here.
    unordered_set<int> s;
    return TragetSum(root, target, s);
    }
};
