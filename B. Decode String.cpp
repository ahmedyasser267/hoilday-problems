#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{


		long long n;
		cin >> n;
		string s;
		string sy = "";
		cin >> s;
		stack<char>st;
		for (int i = 0; i < n; i++)
		{
			st.push(s[i]);
		}
		while (!st.empty())
		{
			long long s1 = st.top() - '0';
			st.pop();
			if (s1 != 0)sy += (s1 - 1 + 'a');
			else
			{

				long long s2 = st.top() - '0';
				st.pop();
				long long x = st.top() - '0';
				st.pop();
				long long y = x * 10 + s2;
				sy += (y - 1 + 'a');
			}

		}

		reverse(sy.begin(), sy.end());
		cout << sy << endl;

	}
	return 0;
}
