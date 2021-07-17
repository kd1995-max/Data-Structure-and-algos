include<vector>
#include<stack>
vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    // Write your code here
	  stack<int> s;
    vector<int> ans(n);
    for(int i = n - 1; i >= 0; i--){
        int x = -1;
        while(!s.empty() and s.top() >= arr[i]) s.pop();
        if(!s.empty()) x = s.top();
      
        ans[i] = x;
        s.push(arr[i]);
    }
    return ans;
}
