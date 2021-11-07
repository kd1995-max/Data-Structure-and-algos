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
    
    //string substr (size_t pos, size_t len) const;
//     Parameters:
//     pos: Position of the first character to be copied.
//     len: Length of the sub-string.
//     size_t: It is an unsigned integral type.

//     Return value: It returns a string object.
    
}
