class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector< vector<int>> ans = {{1}};
        
        if (numRows == 1)
            return ans;
        
        ans.push_back({1, 1});
        
        if (numRows == 2)
            return ans;
        
        for (int i = 2; i < numRows; ++i)
        {
            int prev_row = i-1;
            vector<int> row;
            row.push_back(1);
            
            for (int j = 0; j < ans[prev_row].size()-1; ++j)
            {
                row.push_back(ans[prev_row][j] + ans[prev_row][j+1]);
            }
            row.push_back(1);
            ans.push_back(row);
        }
        return ans;
    }
};
