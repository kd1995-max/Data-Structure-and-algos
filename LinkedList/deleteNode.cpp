void deleteNode(Node *del)
    {
		 struct Node* temp = del->next;
        del->data = del->next->data;
        del->next = del->next->next;
        free(temp);	
	}
