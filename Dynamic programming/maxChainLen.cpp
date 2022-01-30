int maxChainLen(struct val p[],int n)
{
//Your code here
    vector<pair<int,int>>   vec;
    for(int i = 0; i < n; i++)
    {
        vec.push_back({p[i].first,p[i].second});
    }
    
    sort(vec.begin(),vec.end());
    int lis[n];
    lis[0] = 1;
    for(int i = 1; i < n; i++)
    {
        lis[i] = 1;
        for(int j = 0; j < i; j++)
        {
            if(vec[i].first > vec[j].second)
            lis[i] = max(lis[i],lis[j] + 1);
        }
    }
    
    return *max_element(lis,lis+n);
}
