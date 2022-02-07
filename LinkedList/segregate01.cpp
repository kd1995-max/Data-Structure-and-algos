ListNode *segregate01(ListNode *head)
{
    if(head == NULL || head->next == NULL)
    return head;

    ListNode *zero = new ListNode(-1);
    ListNode *pz = zero;

    ListNode *one  = new ListNode(-1);
    ListNode *po = one;

    ListNode *curr = head;

    while(curr != NULL)
    {
        if(curr->val == 0)
        {
            pz->next = curr;
            pz = pz->next;
        }
        else
        {
            po->next = curr;
            po = po->next;
        }

        curr = curr->next;
    }
    
    pz->next = one->next;
    po->next = NULL;


    return zero->next;
}
