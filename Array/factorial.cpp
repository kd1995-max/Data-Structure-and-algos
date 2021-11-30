vector<int> factorial(int N)
{
        // code here
        vector<int>res;
       res.push_back(1);
       
       for(int each=2;each<=N;each++)
       {
           int carry=0;
           for(int i=0;i<res.size();i++)
           {
               int current=res[i]*each + carry;
               res[i]=current%10;
               carry=current/10;
           }
           
           while(carry!=0)
           {
               res.push_back(carry%10);
               carry/=10;
           }
           
       }
       reverse(res.begin(),res.end());
       return res;

    }
