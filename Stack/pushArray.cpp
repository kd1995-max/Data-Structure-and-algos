#include<bits/stdc++.h>

using namespace std;

bool pushArray(int in[],int n , int out[],int m)
{
    stack<int> s1;

    int j = 0;
    for (int i = 0; i < n; i++)
    {
        s1.push(in[i]);

            while (!s1.empty() and s1.top() == out[j])
            {
                s1.pop();
                j++;
            }
        
    }


    return m == j;
        
}



int main(int argc, char const *argv[])
{
    //taking two array input
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }

    if (pushArray(a,n,b,m))
    {
        cout<<"yes"<<endl;
    }
    else
    {
        cout<<"no"<<endl;
    }
 
    
    return 0;
}
