#include<bits/stdc++.h>
using namespace std;

void function_(int n)
{
    if(n < 0)
    return;
    cout << n << " ";
    
    return function_(n--);
}

int main(int argc, char const *argv[])
{
    /* code */
    function_(5);
    return 0;
}
