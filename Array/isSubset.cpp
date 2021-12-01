string isSubset(int a1[], int a2[], int n, int m) {
    unordered_set<int> us;
    
    for(int i = 0; i < n; i++)
    {
        
        us.insert(a1[i]);
        
    }
    
    for(int i = 0; i < m; i++)
    {
        if(us.find(a2[i]) == us.end())
        return "No";
    }
    
    return "Yes";
}
