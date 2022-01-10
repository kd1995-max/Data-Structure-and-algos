
void inorder(node* curr, node*& prev,node*& newHead)
{
	if(!curr)
	return;
	
	inorder(curr->left);
	
	if(!newHead)
	newHead = root;
	
	prev->left=NULL;
	prev->right = root;
	prev = root;
	
	inorder(curr->right);
}


node* flatten(node* root)
{
	node* dummy = new node(-1);
	
	node* prev = dummy;
	
	Node *newHead = NULL;
	
	inorder(parent , prev ,newHead);
	
	prev->left = NULL;
	prev->right = NULL;
	
	return newHead;
}
