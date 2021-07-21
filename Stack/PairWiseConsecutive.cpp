bool pairWiseConsecutive(stack<int> s)
{
    //Code here
    int a , b;
    
    if(s.size() == 1)
    return true;

    while(!s.empty())
    {
        a = s.top();
        s.pop();
        b = (s.empty()) ? 0 : s.top();
        s.pop();
        
        if(abs(a - b) != 1) return false;
    }
    
    return true;
}
