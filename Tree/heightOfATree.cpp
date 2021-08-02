class Solution{
    public:
    //Function to find the height of a binary tree.
    int countHeight(Node* node)
    {
        if(node == NULL)
        {
            
            return 0;
        }
        return max(countHeight(node -> left),countHeight(node -> right)) + 1;
    }
    int height(struct Node* node){
        // code here 
        int count = 0;
        count = countHeight(node);
        return count;
    }
};
