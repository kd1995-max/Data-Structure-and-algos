struct Node* pairwise_swap(struct Node* head)
{
    // your code here
    Node *head1 = head;
    
    while(head1 and head1->next)
    {
        swap(head1->data , head1->next->data);
        head1=head1->next->next;
    }
    
    return head;
}
