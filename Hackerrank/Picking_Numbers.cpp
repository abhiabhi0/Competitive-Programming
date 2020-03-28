#include <iostream>
#include <algorithm>
#include <vector>

int picking_numbers(std::vector<int>& array)
{
	std::sort(array.begin(), array.end());

	int result = 0;
	int count = 1;
	int subarray_first_num = array[0];

	for (int i = 1; i < array.size(); ++i)
	{
		if (subarray_first_num == array[i] || subarray_first_num + 1 == array[i])
		{
			count++;
		}
		else
		{
			if (count > result)
			{
				result = count;
			}
			count = 1;
			subarray_first_num = array[i];
		}
	}

	if (count > result)
	{
		result = count;
	}
	return result;
}

int main()
{
	int size_of_array;
	std::cin >> size_of_array;
	std::vector<int> array(size_of_array);

	for (int i = 0; i < size_of_array; ++i)
	{
		std::cin >> array[i];
	}

	int max_count = picking_numbers(array);
	std::cout << max_count << "\n";
}
