Node* insertInMiddle(Node* head, int x)
{
   Node *newnode;
   Node *slow = head, *fast = head->next;
   
   while(fast != NULL && fast->next != NULL)
   {
       slow = slow->next; fast = fast->next->next;
   }
   newnode = new Node(x);
   newnode->next = slow->next;
   slow->next = newnode;
   return head;
  
//          fast pointer
//              |
//              v  
//   1->2->4
//      ^
//      |
//  slow pointer


//      fast pointer
//            |
//            v  
//   1->2->4->5
//      ^
//      |
//  slow pointer
}
