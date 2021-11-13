void QueueStack :: push(int x)
{
        // Your Code
        q1.push(x);
        
        while(!q2.empty())
        {
            q1.push(q2.front());
            q2.pop();
        }
        
        swap(q1,q2);
}

//Function to pop an element from stack using two queues. 
int QueueStack :: pop()
{
        // Your Code       
        int x = -1;
        if(!q2.empty())
        {
            x = q2.front();
            q2.pop();
        }
        
        return x;
}
