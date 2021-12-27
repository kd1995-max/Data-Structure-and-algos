Node *inpre(Node* root)
{
	Node* p = root->left;
	while(p->right)
	p = p->right;
	
	return p;
}

Node *insuc(Node* root)
{
	Node* p = root->right;

	while(p->left)
	p = p->left;
	
	return p;
}

void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
{
	if(!root)
	return;
	
	if(root->key == key)
	{
		if(root->left)
		pre = inpre(root);
		
		if(root->right)
		suc = insuc(root);
		
		return;
	}
	
	if(root->key < key)
	{
		pre= root;
		findPreSuc(root->right,pre,suc,key);
	}
	else if(root->key > key)
	{
		suc = root;
		findPreSuc(root->left,pre,suc,key);
	}
}
