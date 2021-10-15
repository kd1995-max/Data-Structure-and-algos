#include <bits/stdc++.h>
using namespace std;

void sortk(int arr[],int n,int k)
{
    priority_queue<int,vector<int>,greater<int>> pq;

	for (int i = 0; i <= k; i++)
		pq.push(arr[i]);
	
	int index = 0;
	for (int i = k + 1; i < n; i++)
	{
		arr[index++] = pq.top();
		pq.pop();
		pq.push(arr[i]);
	}
	
	while (pq.empty() == false)
	{
		arr[index++] = pq.top();
		pq.pop();
	}
	
}

int main() {
	//code
	int q;
	cin >> q;
	while (q--)
	{
		int n , k;
		cin >> n >> k;
		int arr[n];

		for (int i = 0; i < n; i++)
			cin >> arr[i];
		
		sortk(arr,n,k);

		for (int i = 0; i < n; i++)
		{
			std::cout << arr[i] << " ";
		}
		
		std::cout << std::endl;
	}
	
	return 0;
}
