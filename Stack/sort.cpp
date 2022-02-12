void insertAtCorrectPosition(int x,stack<int> &s)
{
    if(s.size() == 0 or s.top() < x)  
    {
        s.push(x);    
        return;
    }

        int a = s.top();
        s.pop();
        insertAtCorrectPosition(x,s);
        s.push(a);
}

void reverse(stack<int> &s)
{
    if(s.size() == 0)    
    return;
    
    int x = s.top();
    s.pop();
    reverse(s);
    insertAtCorrectPosition(x,s);
    
}

void SortedStack :: sort()
{
   //Your code here
   reverse(s);
}
