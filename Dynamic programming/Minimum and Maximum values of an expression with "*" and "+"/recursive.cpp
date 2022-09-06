int MCMmin(int i, int j, string str)
    {
        if(i>j)return 0;
        
        if(i==j)
        return str[i]-'0';

        int ans=INT_MAX;
        for(int k=i+1;k<=j-1;k=k+2)
        {
            int tempAns;
            if(str[k]=='+')
            tempAns = MCMmin(i,k-1,str) + MCMmin(k+1,j,str);
            if(str[k]=='*')
            tempAns = MCMmin(i,k-1,str) * MCMmin(k+1,j,str);            
            ans=min(ans,tempAns);
        }
        return ans;
    }
	int MCMmax(int i, int j, string str)
    {
        if(i>j)return 0;
        
        if(i==j)
        return str[i]-'0';

        int ans=INT_MIN;
        for(int k=i+1;k<=j-1;k=k+2)
        {
            int tempAns;
            if(str[k]=='+')
            tempAns = MCMmax(i,k-1,str) + MCMmax(k+1,j,str);
            if(str[k]=='*')
            tempAns = MCMmax(i,k-1,str) * MCMmax(k+1,j,str);            
            ans=max(ans,tempAns);
        }
        return ans;
    }
int main()
{
    string S;
    int j;
    cin>>S;
    // Eg S = "1+2*3+4*5";
    N = S.size()-1;
    int minn=MCMmin(0,N-1,S);
	int maxx=MCMmax(0,N-1,S);
    cout<<"Min is"<<minn <<endl<<"Max is "<<maxx;
    return 0;
}
