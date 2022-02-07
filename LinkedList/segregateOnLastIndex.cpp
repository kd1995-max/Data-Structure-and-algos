ListNode *getTail(ListNode *head)
{
    if(head == NULL)
    return head;

    while(head->next != NULL)
    {
        head = head->next;
    }

    return head;
}

ListNode *segregateOnLastIndex(ListNode *head)
{
    if(head == NULL || head->next == NULL)
    return head;

    ListNode *tail = getTail(head);

    ListNode *smaller = new ListNode(-1);
    ListNode *ps = smaller;

    ListNode *larger = new ListNode(-1);
    ListNode *pl = larger;

    ListNode *curr = head;

    while(curr != NULL)
    {
        if(curr->val <= tail->val)
        {
            ps->next = curr;
            ps = ps->next;
        }
        else
        {
            pl->next = curr;
            pl = pl->next;
        }

        curr = curr->next;
    }

    ps->next = larger->next;
    pl->next = NULL;

    return ps;
}
