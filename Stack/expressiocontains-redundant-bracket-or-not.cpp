#include<bits/stdc++.h>
using namespace std;

bool checkRedundancy(string A) {
	stack<char> st;
	for(char ch : A)
	{
		if(ch == ')')
		{
			int cnt = 0;
			while(!st.empty() and st.top() != '(')
			{
				cnt++;
				st.pop();
			}
			st.pop();
			if(cnt < 2) return 1;
		}
		else st.push(ch);
	}

	return 0;
}

int main()
{
	string str = "((a+b))";
	cout<<checkRedundancy(str)<<"\n";

	str = "(a+(b)/c)";
	cout<<checkRedundancy(str)<<"\n";

	str = "(a+b*(c-d))";
	cout<<checkRedundancy(str)<<"\n";

	return 0;
}
