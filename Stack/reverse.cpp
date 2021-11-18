#include<bits/stdc++.h>

using namespace std;

stack<int> st;

void insert_at_bottom(int x)
{
    if(st.empty())
    {
        st.push(x);
    }
    else
    {
        int temp = st.top();
        st.pop();
        insert_at_bottom(x);
        st.push(temp);
    }
}

void reverse()
{
    if(st.size() > 0)
    {
        int x = st.top();
        st.pop();
        reverse();
        insert_at_bottom(x);
    }
}

int main(int argc, char const *argv[])
{
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);

    stack<int> st1 = st;
    while(!st1.empty())
    {
        cout<<st1.top()<<" ";
        st1.pop();
    }
    cout<<endl;

    reverse();

    cout<<"Reversed Stack: \n";
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;

    return 0;
}
