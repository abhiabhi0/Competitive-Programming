class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        set<int> rows, cols;
        int n = matrix.size(), m = matrix[0].size();
        
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                if (matrix[i][j] == 0)
                {
                    rows.insert(i);
                    cols.insert(j);
                }
            }
        }
        
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                if (rows.find(i) != rows.end() || cols.find(j) != cols.end())
                {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};
