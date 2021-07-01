#include <iostream>
#include <vector>

int main()
{
	int amount;
	std::cin >> amount;

	int count = 0;
	std::vector<int> denominations = {100, 20, 10, 5, 1};

	for (int i = 0; i < denominations.size(); ++i)
	{
		if (amount >= denominations[i])
		{
			int num_bills = amount / denominations[i];
			amount = amount % denominations[i];
			count += num_bills;
		}
	}

	std::cout << count << "\n";
}
