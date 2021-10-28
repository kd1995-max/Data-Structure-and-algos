#include<bits/stdc++.h>

using namespace std;

int FindMissing(vector<int> vec){
    int n = vec.size();

    int accu = 0;
    int xorArray = 0;
    for (int i = 0; i < n; i++)
    {
        xorArray ^= vec[i];
    }

    for (int i = 1; i <= n + 1; i++)
    {
        accu ^= i;
    }
    
    return (accu ^ xorArray);
}

int main(int argc, char const *argv[])
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        
        cin >> n;
        
        vector<int> vec(n);
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
        }
        
        std::cout << "Missing number is " << FindMissing(vec) << std::endl;
    }
    
    return 0;
}
