class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int r = matrix.size();
        int c = matrix[0].size();
        
        //int sz = min(r, c);
        
        for (int j = 0; j < c-1; ++j)
        {
            int k = 1;
            int val = matrix[0][j];
        
            int i = j + 1;
            
            while (i < c && k < r)
            {
                if (matrix[k][i] != val)
                {
                    return false;
                }
                i++;
                k++;
            }
        }
        
        for (int j = 1; j < r; ++j)
        {
            int k = 1;
            int val = matrix[j][0];
        
            int i = j + 1;
            
            while (i < r && k < c)
            {
                if (matrix[i][k] != val)
                {
                    return false;
                }
                i++;
                k++;
            }
        }
        
        
        return true;
    }
};
