Node* addPolynomial(Node *p1, Node *p2)
    {
        //Your code here
        Node *newNode = NULL;
        Node *temp = NULL;
        while(p1 and p2)
        {
            if(p2->pow > p1->pow)
            {
                if(newNode == NULL)
                {
                    newNode = new Node(p2->coeff , p2->pow);
                    temp = newNode;
                }
                else
                {
                    temp->next = new Node(p2->coeff , p2->pow);
                    temp = temp->next;
                }
                
                p2 = p2->next;
            }
            else if(p1->pow > p2->pow)
            {
                if(newNode == NULL)
                {
                    newNode = new Node(p1->coeff , p1->pow);
                    temp = newNode;
                }
                else
                {
                    temp->next = new Node(p1->coeff , p1->pow);
                    temp = temp->next;
                }
                
                p1 = p1->next;
            }
            else
            {
                if(newNode == NULL)
                {
                    newNode = new Node(p1->coeff + p2->coeff , p1->pow);
                    temp = newNode;
                }
                else
                {
                    temp->next = new Node(p1->coeff + p2->coeff , p1->pow);
                    temp = temp->next;
                }
                
                p2 = p2->next;
                p1 = p1->next;
            }
        }
        if(p1 and !p2)
        {
            while(p1)
            {
                 temp->next = new Node(p1->coeff , p1->pow);
                 temp = temp->next;
                 p1 = p1->next;
            }
        }
        else if(p2 and !p1)
        {
            while(p2)
            {
                temp->next = new Node(p2->coeff , p2->pow);
                temp = temp->next;
                p2 = p2->next;
            }
        }
        
        return newNode;
    }
