#include <bits/stdc++.h>
 
using namespace std;

void solve()
{
	int n;
	cin >> n;

	if (n == 2)
	{
		cout << "0\n";
		return;
	}

	if (n == 3)
	{
		cout << "1\n";
		return;
	}

	int p = 2;

	// while (1)
	// {
	// 	if ((tmp != 0) && ((tmp & (tmp-1))) == 0)
	// 	{
	// 		break;
	// 	}
	// 	tmp--;
	// }

	while (pow(2, p) <= n)
	{
		p++;
	}

	p--;
	int v = pow(2, p);

	int a = v - p - 1;

	if (n > v)
	{
		a += (n-v);	
	}
	

	cout << a << "\n";

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
