#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, count = 0;
    cin >> a;
    int x[1000], y[1000];
    for (int i = 0; i < a; i++)
    {
        cin >> x[i];
        cin >> y[i];
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            if (x[i] == y[j])
            {
                count++;
            }
        }
    }
    cout << count;
}