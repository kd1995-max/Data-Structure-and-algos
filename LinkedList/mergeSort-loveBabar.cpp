class Solution{
  public:
    //Function to sort the given linked list using Merge Sort.
    Node* getMid(Node* head){
        Node* slow = head;
        Node* fast = head->next;
        
        while(fast!=NULL and fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
    
    Node* merge(Node*l,Node*r){
        Node* newList = new Node(-1);
        Node* ans = newList;
        while(l!=NULL and r!=NULL)
        {
            if(l->data<r->data)
            {
                    ans->next = new Node(l->data);
                    ans = ans->next;
                    l = l->next;
            }
            else
            {
                 ans->next = new Node(r->data);
                    ans = ans->next;
                    r= r->next;
            }
        }
        
        while(l!=NULL)
        {
            ans->next = new Node(l->data);
            ans = ans->next;
            l = l->next;
        }
        while(r!=NULL)
        {
            ans->next = new Node(r->data);
            ans = ans->next;
            r= r->next;
        }
        return newList->next;
    }
    
    
    Node* mergeSort(Node* head) {
    
    if(!head || !head->next)
    return head;
    
    Node* mid  = getMid(head);
    Node* right  = mid->next;
    mid->next = NULL;
    Node* l = mergeSort(head);
    Node* r = mergeSort(right);
    Node *ans =  merge(l,r);
 
    return ans;
    }
};
