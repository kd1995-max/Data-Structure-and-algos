void inorder(node* curr, node*& prev)
{
	if(!curr)
	return;
	
	inorder(curr->left);
	
	prev->left=NULL;
	prev->right = root;
	prev = root;
	
	inorder(curr->right);
}


node* flatten(node* root)
{
	node* dummy = new node(-1);
	
	node* prev = dummy;
	
	inorder(parent , prev);
	
	prev->left = NULL;
	prev->right = NULL;
	
	return dummy->right;
}
