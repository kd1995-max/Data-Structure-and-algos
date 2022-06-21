    void solve(vector<string> &ans,unordered_map<int,string> um,string &op, int i,int a[],int n)
    {
        if(op.length() == n)
        {
            ans.push_back(op);
            return;
        }
        
        string word = um[a[i]];
        
        for(int j = 0; j < word.length(); j++)
        {
            op.push_back(word[j]);
            solve(ans,um,op,i + 1,a,n);
            op.pop_back();
        }
    }
    vector<string> possibleWords(int a[], int N)
    {
        //Your code here
        unordered_map<int,string> um;
        um[1] = ",";
        um[2] = "abc";
        um[3] = "def";
        um[4]="ghi";
        um[5]="jkl";
        um[6]="mno";
        um[7]="pqrs";
        um[8]="tuv";
        um[9]="wxyz";
        
        vector<string>  ans;
        string op = "";
        solve(ans,um,op,0,a,N);
        
        return ans;
    }
