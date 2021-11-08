#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int x, y, l, r;
    cin >> x >> y >> l >> r;
    int ans = 0;

    int mask = 1 << (r - l + 1);
    mask--;
    mask = mask << (l - 1);
    mask = mask & x;
    y = y | mask;
    cout << y << endl;
    
    return 0;
}
