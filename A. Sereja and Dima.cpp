
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int tab[1000];
	int s = 0, d = 0, sum = 0;
	cin >> n;
	for (int j = 0; j < n; j++) {
		cin >> tab[j];
		sum += tab[j];
	}
	int i = 0;
	int j = n - 1;
	while (i <= j) {
		if (tab[j] >= tab[i]) {
			s = s + tab[j];
			if (tab[i] > tab[j - 1]) {
				j = j - 1;
				i = i + 1;
			}
			else j = j - 2;
		}
		else {
			s = s + tab[i];
			if (tab[j] >= tab[i + 1]) {
				i = i + 1;
				j = j - 1;
			}
			else i = i + 2;
		}
	}

	cout << s << " " << sum - s;
	return 0;
}
