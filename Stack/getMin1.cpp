 int getMin()
       {
           if(s.empty())
           {
               return -1;
           }
           return minEle;
       }
       
       /*returns poped element from stack*/
       int pop()
       {
           int temp;
           if(s.empty())
           {
               return -1;
           }
           else
           {
               if(s.top()>=minEle)
               {
                   int temp=s.top();
                   s.pop();
                   return temp;
               }
               else if(s.top()<minEle)
               {
                   temp=minEle;
                   minEle=2*minEle-s.top();
                   s.pop();
                   return temp;
               }
           }
       }
       
       
       void push(int x)
       {
           if(s.empty())
           {
               s.push(x);
               minEle=x;
           }
           else
           {
               if(x>=minEle)
               {
                   s.push(x);
               }
               else if(x<minEle)
               {
                   s.push(2*x-minEle);
                   minEle=x;
               }
           }
           
       }
