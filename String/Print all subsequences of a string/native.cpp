#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    string str = "abc";
    string out = "";
    for (int i = 0; i < str.length(); i++)
    {
        for (int j = 1; j <= str.length() - i; j++)
        {
            out = str.substr(i , j);
            std::cout << out << std::endl;
        }
        
    }
    
}
