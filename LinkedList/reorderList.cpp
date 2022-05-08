Node* reverseList(Node* head)
{
    Node* prev=NULL;
    while(head!=NULL){
        Node* next=head->next;
        head->next=prev;
        prev=head;
        head=next;
    }
    return prev;
}

void reorderList(Node* head) {
    // Your code here
    if(head==NULL || head->next==NULL)
    return;
    Node* slow = head;
    Node* fast = head;
    
    while(fast!=NULL and fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    
    Node*  head2 = reverseList(slow);
    Node* head1=head;
    while(head1!=NULL and head2!=NULL)
    {
        Node* temp= head1->next;
        head1->next=head2;
        head1=temp;
        
        temp=head2->next;
        head2->next=head1;
        head2=temp;
    }
    
    if(head1!=NULL)
    {
        head1->next=NULL;
    }
}
