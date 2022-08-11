void dfs(int start,unordered_map<int,vector<int>> &adj,int vis[],string &ans){
           
           vis[start] = 1;
           
           for(auto it : adj[start]){
              if(!vis[it])
              dfs(it,adj,vis,ans);
           }
           
            ans.push_back(start + 'a');
       }
    
    string findOrder(string dict[], int n, int k) {

        unordered_map<int,vector<int>> adj;
        
        for(int i=0; i < n-1 ; i++)
        {
            string temp = dict[i];
            string temp1 = dict[i+1];
            
            for(int j=0;j<min(temp.length(),temp1.length());j++){
                
                if(temp[j]!=temp1[j])
                {
                    adj[temp[j]-'a'].push_back(temp1[j]-'a');
                    break;
                }
            }
        }
        
       int vis[26]={0};
       string ans="";
       
        for(int i=0; i < k; i++)
        {
            if(!vis[i])
            {
                dfs(i,adj,vis,ans);    
            }
        }
        
        reverse(ans.begin(),ans.end());
        
        return ans;
    }
