#include<bits/stdc++.h>
#define size 256
using namespace std;

int main(int argc, char const *argv[])
{
    vector<bool> vis(size);

    string s;
    cin >> s;

    int res = -1 , i;

    for (i = s.length() - 1; i >= 0; i--)
    {
        if(vis[s[i]])   
        res = i;
        else
        vis[s[i]] = true;
    }

    std::cout << "Left most repeating element is "<< s[res] << std::endl;  
    return 0;
}
