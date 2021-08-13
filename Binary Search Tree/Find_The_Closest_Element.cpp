class Solution
{
    public:
    //Function to find the least absolute difference between any node
	//value of the BST and the given integer.
	Node *floor(Node* root ,int x)
	{
	    Node *curr = NULL;
	    while(root!=NULL)
	    {
	        if(root->data == x)
	        return root;
	        else if(root->data > x)
	        root = root -> left;
	        else{
	            curr = root;
	            root = root->right;
	        }
	    }
	    return curr;
	}
	
	Node *ceil(Node* root ,int x)
	{
	    Node *res=NULL;
        while(root!=NULL){
            if(root->data==x)
                return root;
            else if(root->data<x)
                root=root->right;
            else{
                res=root;
                root=root->left;
            }
        }
    return res;
	}
	
    int minDiff(Node *root, int K)
    {
        //Your code here
        int h = 0, l = 0;
        Node *floor_ = NULL, *ceil_ = NULL;
        floor_ = floor(root,K);
        ceil_ = ceil(root , K);
        if(ceil_)
        h = ceil_->data;
        if(floor_)
        l = floor_->data;
        return min(abs(K-h),abs(K-l));
    }
};
