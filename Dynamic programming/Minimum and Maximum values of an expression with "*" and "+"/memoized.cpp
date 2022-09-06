#include <bits/stdc++.h>
using namespace std;
int dp1[100][100];
int dp2[100][100];
  int MCMmin(int i, int j, string str)
    {
        if(i>j)return 0;
        
        if(i==j)
        return str[i]-'0';
        
        if(dp1[i][j]!=-1)
        return dp1[i][j];
        
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
        return dp1[i][j]=ans;
    }
	int MCMmax(int i, int j, string str)
    {
        if(i>j)return 0;
        
        if(i==j)
        return str[i]-'0';
        
        if(dp2[i][j]!=-1)
        return dp2[i][j];
        
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
        return dp2[i][j]=ans;
    }
int main()
{
    string S;
   // cin>>S;
     S = "1+2*3+4*5";
    int N = S.length();
    memset(dp1,-1,sizeof(dp1));
    memset(dp2,-1,sizeof(dp2));
    int minn=MCMmin(0,N-1,S);
	int maxx=MCMmax(0,N-1,S);
    cout<<"Min is "<<minn <<endl<<"Max is "<<maxx;
    return 0;
}
