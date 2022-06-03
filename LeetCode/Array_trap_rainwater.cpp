//min(left_max_prefix[i], right_max_suffix[i]) - a[i]

//Optimised solution

class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        
        int left = 0, right = n-1;
        int res = 0;
        int left_max = 0, right_max = 0;
        
        while (left <= right)
        {
            if (height[left] <= height[right])
            {
                if (height[left] >= left_max)
                {
                    left_max = height[left];
                }
                else  
                {
                    res += left_max - height[left];
                }
                left++;
            }
            else  
            {
                if (height[right] >= right_max)
                {
                    right_max = height[right];
                }
                else  
                {
                    res += right_max - height[right];
                }
                right--;
            }
        }
        return res;
    }
};
