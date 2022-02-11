void deleteMid(stack<int>&s, int n)
    {
        // code here.. 
        int halfway = n/2;
         
        stack<int> s1;
         
        while(halfway--)
        {
            s1.push(s.top());
            s.pop();
        }
         
        s.pop();
        
        while(!s1.empty())
        {
            s.push(s1.top());
            s1.pop();
        }
    }
