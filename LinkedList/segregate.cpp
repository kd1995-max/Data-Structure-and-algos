ListNode* segregate(ListNode* head, int idx)
{
  if (head == nullptr || head->next == nullptr)
    return head;

  int i = 0, data = 0;
  ListNode* curr = head;
  while (curr != nullptr)
  {
    if (i == idx)
      data = curr->val;

    i++;
    curr = curr->next;
  }

  ListNode* smaller = new ListNode(-1);
  ListNode* sp = smaller;

  ListNode* greater = new ListNode(-1);
  ListNode* gp = greater;

  i = 0;
  curr = head;
  ListNode* pivot = nullptr;
  while (curr != nullptr)
  {
    if (i == idx)
    {
      pivot = curr;
    }
    else if (curr->val <= data)
    {
      sp->next = curr;
      sp = sp->next;
    }
    else
    {
      gp->next = curr;
      gp = gp->next;
    }

    curr = curr->next;
    i++;
  }

  sp->next = pivot;
  pivot->next = greater->next;
  gp->next = nullptr;
  sp = sp->next;

  return smaller->next;
}
