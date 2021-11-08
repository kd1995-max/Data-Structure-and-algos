#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n , i , x , answer;
    cin >> n;
    i = 0;
    x = n;
    answer = 0;

    while(x)
    {
        if(x & 1)
        {
            answer += n << i;
        }

        x >>= 1;
        i++;
    }

    cout << answer << endl;

    return 0;
}
