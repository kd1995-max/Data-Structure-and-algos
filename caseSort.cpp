 string caseSort(string str, int n)
    {
        // your code here
        priority_queue<char, vector<char> , greater<char> > pq_small;
        priority_queue<char, vector<char> , greater<char> > pq_capital;
        
        for(int i = 0; i < n; i++)
        {
            if(str[i] >= 'a' and str[i] <= 'z')
            pq_small.push(str[i]);
            else
            pq_capital.push(str[i]);
        }
        
        string res = "";
        
        for(int i = 0; i < n; i++)
        {
            if(str[i] >= 'a' and str[i] <= 'z')
            {
                res += pq_small.top();
                pq_small.pop();
            }
            else
            {
                res += pq_capital.top();
                pq_capital.pop();
            }
        }
        
        
        return res;
    }
