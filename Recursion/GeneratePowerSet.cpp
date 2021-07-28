void powerSetUtil(string &str, vector<string>&v, int index,string curr)
{
    if (index == str.length())
    {
       v.push_back(curr);    
       return;
    }   

   
    powerSetUtil(str, v, index+1, curr);
    powerSetUtil(str, v, index+1, curr+str[index]);
}

vector <string> powerSet(string s)
{
    vector<string> ans;
    powerSetUtil(s, ans,0,"");
    return ans;
}

