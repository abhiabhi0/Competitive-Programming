#include <iostream>
#include <vector>

int no_of_ways(int n)
{
	std::vector<int> ways(n+1);

	ways[0] = 1;
	ways[1] = 1;

	for (int i = 2; i <= n; ++i)
	{
		ways[i] = ways[i-1] + ways[i-2];
	}
	return ways[n];
}

int main()
{
	int n;
	std::cin >> n;

	int res = no_of_ways(n);
	std::cout << res << "\n";
}