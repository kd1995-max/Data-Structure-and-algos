TreeNode *getSuccessor(TreeNode* root)
    {
        root = root->right;
        while(root!=NULL && root->left != NULL)
        root = root->left;

        return root;
    }
    TreeNode* deleteNode(TreeNode* root, int x) {
        if(root == NULL) return root;
        else if(root->val > x)
        root->left = deleteNode(root->left,x);
        else if(root->val < x)
        root->right = deleteNode(root->right,x);
        else{
            if(root -> left == NULL)
            {
                TreeNode *temp = root->right;
                delete root;
                return temp;
            }
            else if(root->right == NULL)
            {
                TreeNode *temp = root->left;
                delete(root);
                return temp;
            }
            else
            {
                TreeNode *curr = getSuccessor(root);
                root->val = curr->val;
                root->right = deleteNode(root->right , curr->val);
            }
        }

        return root;
    }
