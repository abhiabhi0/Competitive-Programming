class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        //int mn = numeric_limits<int>::max();
        vector<int> res;
        
        for (int i = 0; i < matrix.size(); ++i)
        {
            auto mn_itr = min_element(matrix[i].begin(), matrix[i].end());
            int idx = mn_itr - matrix[i].begin();
            
            int mx = numeric_limits<int>::min();
            for (int j = 0; j < matrix.size(); ++j)
            {
                mx = max(mx, matrix[j][idx]);
            }
            
            if (mx == *mn_itr)
            {
                res.push_back(mx);
            }
        }
        return res;
    }
};
