Node* findIntersection(Node* head1, Node* head2)
    {
        // code here
        // return the head of intersection list
          unordered_set<int> us;
          
          Node *curr=NULL;
          Node *temp=NULL;
            while(head2)
            {
                    us.insert(head2->data);
                    head2 = head2 -> next;
            }
            
            while(head1)
            {
                if(us.find(head1->data) != us.end())
                {
                    if(curr == NULL)
                    {
                        curr = new Node(head1->data);
                        temp = curr;
                    }
                    else
                    {
                        temp->next = new Node(head1->data);
                        temp=temp->next;
                    }
                }
                
                head1=head1->next;
            }
            return curr;
    }
