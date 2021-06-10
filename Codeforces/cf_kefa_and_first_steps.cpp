#include <iostream>
#include <vector>

int main()
{
	int n;
	std::cin >> n;

	std::vector<int> earnings(n);

	int current_earning; //stores current earning of non-decreasing subsegment
	int final_count = 0; //stores length of longest non-decreasing subsegment
	int local_count = 1; //stores length of current subsegment in process

	for (int i = 0; i < n; ++i)
	{
		std::cin >> earnings[i];

		if (i == 0)
		{
			current_earning = earnings[i];
			//local_count++;
		}
		else
		{
			if (earnings[i] >= current_earning)
			{
				local_count++;
				current_earning = earnings[i];
			}
			else
			{
				if (local_count > final_count)
				{
					final_count = local_count;
				}
				local_count = 1;
				current_earning = earnings[i];
			}		
		}
	}
	if (local_count > final_count)
	{
			final_count = local_count;
	}
	std::cout << final_count << "\n";
}