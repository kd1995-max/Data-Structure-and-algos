void reverse(queue<int> &q)
{
    if(q.size() == 0)    
    return;
    
    int x = q.front();
    q.pop();
    reverse(q);
    q.push(x);
}

queue<int> rev(queue<int> q)
{
    // add code here.
    reverse(q);
    
    return q;
}
