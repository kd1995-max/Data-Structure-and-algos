#include<bits/stdc++.h>

using namespace std;

void printSubsequence(string in, string out)
{
    if(in.length() == 0){
        std::cout << out << std::endl;
        return;
    }
    

    printSubsequence(in.substr(1) , out);
    printSubsequence(in.substr(1) , out + in[0]);
}
int main(int argc, char const *argv[])
{
    string str = "abc";
    string out = "";
    printSubsequence(str,out);    
    return 0;
}
