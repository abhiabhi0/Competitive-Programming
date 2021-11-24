#include <iostream>
#include <vector>
#include <algorithm>

int maximum_subarray(std::vector<int>& nums)
{
	int max_sum = -100001;
    int curr_sum = 0;
    
    if (*std::max_element(nums.begin(), nums.end()) < 0)
    {
        max_sum = *std::max_element(nums.begin(), nums.end());
    }
    else if (*std::min_element(nums.begin(), nums.end()) >= 0)
    {
        for (int i = 0; i < nums.size(); ++i)
        {
            curr_sum += nums[i];
        }
        max_sum = curr_sum;
    }
    else
    {
        for (int i = 0; i < nums.size(); ++i)
        {
            curr_sum += nums[i];
        
            if (curr_sum < 0)
            {
                curr_sum = 0;
            }
            
            max_sum = std::max(max_sum, curr_sum);
        }
    }
    return max_sum;
}

int main()
{
	int n;
	std::cin >> n;

	std::vector<int> nums(n);

	for (int i = 0; i < n; ++i)
	{
		std::cin >> nums[i];
	}

	int res = maximum_subarray(nums);

	std::cout << res << "\n";
}
