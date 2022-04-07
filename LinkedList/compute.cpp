class Solution
{
    public:
    struct Node* reverseList(struct Node *head)
    {
        // code here
        // return head of reversed list
        Node *first, *second, *third;
        
        first =  NULL;
        second = third = head;
        
        third = head;
        
        while(second)
        {
                third = second->next;
                second->next = first;
                first = second;
                second = third;
        }
        
        return first;
    }
    
    Node *compute(Node *head)
    {
        // your code goes here
        
        if(!head->next)
        return head;
        
        head = reverseList(head);
        
        Node* newNode = new Node(head->data);
        head = head->next;
        
        Node *curr = newNode;
        
        while(head)
        {
            if(curr->data <= head->data)
            {
                curr->next = new Node(head->data);
                curr = curr->next;
            }
            
            head = head -> next;
        }
        
        newNode = reverseList(newNode);
        
        return newNode;
    }
    
};
