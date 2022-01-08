#include<bits/stdc++.h>
using namespace std;

//right shift an array by one place
void rightShift(vector<int>	&arr, int n , int low , int high)
{
	int temp = arr[high];
	for (int i = high; i > low; i--)
	{
		arr[i] = arr[i - 1];
	}	
	arr[low] = temp;
}


void Rearrange(vector<int>	&arr, int n)
{
	bool flag = false;
	

	for(int i = 0; i < n; i++)
	{
		flag = !flag;
		int j;
		
		if(flag and arr[i] > 0)		
		{
			for (j = i + 1; j < n; j++)
			{
				if(arr[j] < 0)
				{
					break;
				}

			}
			if(j!=n)
			rightShift(arr, n, i, j);
		}
		else if(!flag and arr[i] < 0)
		{
			for (j = i + 1; j < n; j++)
			{
				if(arr[j] > 0)
				{
					break;
				}
			}
			if(j!=n)
			rightShift(arr, n, i, j);
		}

		
	}
}

int main(int argc, char const *argv[])
{
	/* code */
	vector<int>	arr = {1, 2, 3, -4, -1, 4};
	int n = arr.size();

	Rearrange(arr, n);
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	return 0;
}
