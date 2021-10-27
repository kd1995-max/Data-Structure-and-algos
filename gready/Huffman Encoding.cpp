struct Node{
	        char data;
	        unsigned freq;
	        Node *left;
	        Node *right;
	        Node(char data, unsigned freq, Node* l=NULL, Node* r = NULL)
	        {
	            this->data = data;
	            this->freq = freq;
	            this->left = l;
	            this->right = r;
	        }
	    };
	    
	    struct compare{
	        bool operator()(Node *l,Node *r)
	        {
	            return (l->freq > r->freq);
	        }
	    };
	    
	    void printCodes(Node* root,string str,vector<string> &res)
	    {
	        if(!root)    
	        return;
	        
	        if(root->data != '$')
	        res.push_back(str);
	        
	        printCodes(root->left,str + "0",res);
	        printCodes(root->right,str + "1",res);
	    }
	    
	    vector<string> printHCodes(string arr, vector<int> freq, int size, vector<string> &res)
	    {
	        
	        priority_queue<Node*, vector<Node *>, compare> h;
	        
	        for(int i = 0; i < size; i++)
	            h.push(new Node(arr[i] , freq[i]));
	        
	        while(h.size() > 1)
	        {
	            Node *l = h.top(); h.pop();
	            Node *r = h.top(); h.pop();
	            
	            Node *top = new Node('$' , l->freq + r->freq, l , r);
	            
	            h.push(top);
	        }
	        
	        printCodes(h.top(),"",res);
	        
	        return res;
	    }
	    
	    
		vector<string> huffmanCodes(string S,vector<int> f,int N)
		{
		    // Code here
		    vector<string> res;
		    
		    printHCodes(S,f,N,res);
		    
		    return res;
		}
