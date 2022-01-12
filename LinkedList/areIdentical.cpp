bool areIdentical(struct Node *head1, struct Node *head2)
{
    // Code here
    Node *curr1 = head1, *curr2 = head2;
   while (curr1 != NULL && curr2 != NULL) {
       if (curr1 -> data != curr2 -> data)
           return false;
       curr1 = curr1 -> next;
       curr2 = curr2 -> next;
   }
   
   if (curr1 != NULL || curr2 != NULL)
       return false;
   return true;
}
