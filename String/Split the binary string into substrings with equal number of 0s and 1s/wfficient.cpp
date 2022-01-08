#include<bits/stdc++.h>

using namespace std;

int helper(string arr)
{
	int count_one = 0;
	int count_zero = 0;
	int count = 0;

	for(int i = 0; i < arr.length(); i++)
	{
		if(arr[i] == '1')
		{
			count_one++;
		}
		else
		{
			count_zero++;
		}

		if(count_one == count_zero)
		{
			count++;
			count_one = 0;
			count_zero = 0;
		}
	}

	return count;
}

int main(int argc, char const *argv[])
{
	string str = "010011010100000000" ;
	
	std::cout << helper(str) << std::endl;

	return 0;
}
