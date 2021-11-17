class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n = image.size();
        
        for (int i = 0; i < n; ++i)
        {
            int l = 0, r = n-1;
            
            while (l <= r)
            {
                if (l < r)
                {
                    image[i][l] = image[i][l] ^ image[i][r];
                    image[i][r] = image[i][l] ^ image[i][r];
                    image[i][l] = image[i][l] ^ image[i][r];

                    //cout << image[i][l] << " " << image[i][r] << "\n";
                    if (image[i][l] == 0)
                    {
                        image[i][l] = 1;
                    }
                    else if (image[i][l] == 1)
                    {
                        image[i][l] = 0;
                    }

                    if (image[i][r] == 0)
                    {
                        image[i][r] = 1;
                    }
                    else if (image[i][r] == 1)
                    {
                        image[i][r] = 0;
                    }
                }
                else
                {
                    if (image[i][l] == 0)
                    {
                        image[i][l] = 1;
                    }
                    else if (image[i][l] == 1)
                    {
                        image[i][l] = 0;
                    }
                }
                
                //cout << image[i][l] << " " << image[i][r] << "\n";
                
                l++;
                r--;
            }
        }
        
        return image;
    }
};
