class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int peri = 0;
        
        int r = grid.size();
        int c = grid[0].size();
        
        for (int i = 0; i < r; ++i)
        {
            for (int j = 0; j < c; ++j)
            {
                if (grid[i][j])
                {
                    peri += 4;
                    
                    if (i-1 >= 0 && grid[i-1][j])
                    {
                        peri -= 1;
                    }
                    
                    if (j-1 >= 0 && grid[i][j-1])
                    {
                        peri -= 1;
                    }
                    
                    if (i+1 < r && grid[i+1][j])
                    {
                        peri -= 1;
                    }
                    
                    if (j+1 < c && grid[i][j+1])
                    {
                        peri -= 1;
                    }
                }
            }
        }
        
        return peri;
    }
};
