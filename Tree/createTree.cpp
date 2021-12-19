Node *createTree(int arr[], int n)
    {
        // Your code here
        unordered_map<int , Node*> um;
	
    	for(int i = 0; i < n; i++)
    	{
    		Node *newNode = new Node(i);
    		um[i] = newNode;
    	}
    	
    	Node *root = NULL;
    	
    	//arr[i] <---- parent
    	// i <---- child
    	
    	for(int i = 0; i < n; i++)
    	{
    		if(arr[i] < 0)
    		root = um[i];
    		
    		else
    		{
    			if(um[arr[i]]->left == NULL)
    			um[arr[i]] -> left = um[i];
    			else
    			um[arr[i]] -> right = um[i];
    		}
    	}
    	
    	return root;
    }
