void deleteMid(stack<int>&s, int n)
    {
        // code here.. 
        int halfway = n/2.0;
        
        stack<int> s1;
        
        while(halfway--)
        {
            int x = s.top();
            s.pop();
            s1.push(x);
        }
        
        s.pop();
        
        while(!s1.empty())
        {
            int x = s1.top();
            s1.pop();
            s.push(x);
        }
    }
