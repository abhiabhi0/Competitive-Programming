#include <bits/stdc++.h>
 
using namespace std;

void solve()
{
	int n;
	cin >> n;

	unordered_map<int, int> um;
	for (int i = 0; i < n-1; ++i)
	{
		char val;
		cin >> val;
 
		if (val == '0')
		{
			if (um.find(i) == um.end())
			{
				um.insert({i, i+1});
			}
			else  
			{
				um[i] = i+1;
			}

			if (um.find(i+1) == um.end())
			{
				um.insert({i+1, -1});
			}  
		}
		else  
		{
			if (um.find(i) == um.end())
			{
				um.insert({i, -1});
			}

			if (um.find(i+1) == um.end())
			{
				um.insert({i+1, i});
			}
			else  
			{
				um[i+1] = i;
			}
		}
	}

	// if (val == 0)
	// {
	// 	um[n-1] = -1;
	// }

	int c = 0;

	for (auto& it : um)
	{
		if (it.second == -1)
		{
			c++;
		}

		//cout << it.first << " " << it.second << "\n";
	}

	cout << c << "\n";

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
