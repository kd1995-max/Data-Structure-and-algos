class Solution
{
    public:
    //Function to reverse words in a given string
    void reverse(string &str,int low, int high){
    while(low<=high){
        swap(str[low],str[high]);
        low++;
        high--;
    }
}
    string reverseWords(string S) 
    { 
        // code here 
        int start = 0 , end = 0 ; 
        for(end = 0; end < S.length(); end++)
        {
            if(S[end] == '.')
            {
                reverse(S , start , end - 1);
                start = end + 1;
            }
        }
        
        reverse(S , start , S.length() - 1);
        reverse(S , 0 , S.length() - 1);
        return S;
    } 
};
