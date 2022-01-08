#include<bits/stdc++.h>

using namespace std;

int helper(string arr)
{
	unordered_map<char, int> m;
	m['0'] = -1;
	m['1'] = -2;

	int count = 0;

	for(int i = 0; i < arr.size(); i++)
	{
		if(arr[i] == '0' and m['0'] == -1)
		m['0'] = 0;
		else if(arr[i] == '1' and m['1'] == -2)
		m['1'] = 0;
		

		m[arr[i]]++;

		if(m['1'] == m['0'])
		{
			count++;
			m.clear();
			m['0'] = -1;
			m['1'] = -2;
		}
	}

	return count;
}

int main(int argc, char const *argv[])
{
	string str = "0100110101001110101000111010" ;
	
	std::cout << helper(str) << std::endl;

	return 0;
}
