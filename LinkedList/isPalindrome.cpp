class Solution{
  public:
    //Function to check whether the list is palindrome.
    Node *getMiddle(Node *root)
    {
        Node *slow = root;
        Node *fast = root;
        
        while(fast and fast->next)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
        
        return slow;
    }
    
    Node *reverseLinkedList(Node *head)
    {
        Node *prev = NULL, *curr_next = NULL, *curr = head;
        
        while(curr)
        {
            curr_next = curr->next;
            curr->next = prev;
            
            prev = curr;
            curr = curr_next;
        }
        
        return prev;
    }
    
    bool isPalindrome(Node *head)
    {
        //Your code here
        Node *mid = getMiddle(head);
        
        Node *oldHead = head;
        Node *halfWayReverse = reverseLinkedList(mid);
        
        while(halfWayReverse != NULL)
        {
            if(oldHead->data != halfWayReverse->data)
            return false;
            
            halfWayReverse = halfWayReverse -> next;
            oldHead = oldHead -> next;
        }
        
        return true;
    }
};
