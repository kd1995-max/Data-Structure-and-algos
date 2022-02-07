ListNode *segregate012(ListNode *head)
{
    if(head == NULL || head->next == NULL)
    return head;

    ListNode *zero = new ListNode(-1);
    ListNode *pz = zero;

    ListNode *one = new ListNode(-1);
    ListNode *po = one;

    ListNode *two = new ListNode(-1);
    ListNode *pt = two;

    ListNode *curr = head;

    while(curr != NULL)
    {
        if(curr->val == 0)
        {
            pz->next = curr;
            pz = pz->next;
        }
        else if(curr->val == 1)
        {
            po->next = curr;
            po = po->next;
        }
        else if(curr->val == 2)
        {
            pt->next = curr;
            pt = pt->next;
        }

        curr = curr->next;
    }
    
    po -> next = two->next;
    pz -> next = one->next;
    pt->next = NULL;
   
   return zero->next;
}
