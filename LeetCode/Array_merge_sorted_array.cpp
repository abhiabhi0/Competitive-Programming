class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = 0, j = 0;
        
        while (i < m && j < n)
        {
            if (nums1[i] > nums2[j])
            {
                swap(nums1[i], nums2[j]);
                
                int k = j;
                while (k < n-1 && nums2[k+1] < nums2[k])
                {
                    swap(nums2[k+1], nums2[k]);
                    k++;
                }
            }
            i++;
        }
        
        i = m, j = 0;
        
        while (i < (m+n) && j < n)
        {
            nums1[i] = nums2[j];
            i++;
            j++;
        }
    }
};

//Optimised Solution

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int k = m+n-1, i = m-1, j = n-1;
        
        while (i >= 0 && j >= 0)
        {
            if (nums1[i] > nums2[j])
            {
                nums1[k--] = nums1[i--];
            }
            else  
            {
                nums1[k--] = nums2[j--];
            }
        }
        
        while (j >= 0)
        {
            nums1[k--] = nums2[j--];
        }
    }
};
