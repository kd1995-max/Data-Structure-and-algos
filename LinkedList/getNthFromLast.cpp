int getNthFromLast(Node *head, int n)
{
       // Your code 
       
       if(head == NULL || head->next == NULL)
       return -1;
       
       Node *fast = head;
       Node *slow = head;
       
       for(int jump = 0; jump < n; jump++)
       {
           if(fast == NULL)
           return -1;
           
           fast = fast->next;
       }
       
       while(fast != NULL)
       {
           fast = fast->next;
           slow = slow->next;
       }
       
       return slow->data;
}
