#include <bits/stdc++.h>
 
using namespace std;

void solve()
{
	int n;
	cin >> n;

	vector<int> v(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
	}
	long long total = 0;

	for (int i = 31; i >= 0; i--)
	{
		long long c = 0;

		for (int j = 0; j < n; ++j)
		{
			if ((v[j] != -1) && ((v[j] & (1 << i)) != 0))
			{
				c++;
			}
		}

		if (c > 1)
		{
			total += ((c * (c-1))/2);

			for (int j = 0; j < n; ++j)
			{
				if ((v[j] != -1) && ((v[j] & (1 << i)) != 0))
				{
					v[j] = -1;
				}
			}
		}
	}

	cout << total << "\n";
}
 
int main()
 
{
 
#ifndef ONLINE_JUDGE
 
    freopen("in.txt", "r", stdin);
 
    freopen("out.txt", "w", stdout);
   
#endif

    ios::sync_with_stdio(false);
    cin.tie(0);
 
    int t;
    cin >> t;

    while (t--)
    {
    	solve();
    }

    //solve();

}
