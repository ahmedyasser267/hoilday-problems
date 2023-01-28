#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,c=0;
	cin >> t;
	while (t--)
	{
		long long n;
		cin >> n;
		long long arr[n];
		for (int i = 0; i <n; i++)
		{
			cin >> arr[i];
		}
	
		sort(arr, arr + n);
		cout << arr[n - 1] - arr[0] << "\n";
	}
	
	return 0;
}