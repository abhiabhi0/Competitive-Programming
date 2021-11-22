int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int count = 0;
    int x = A[0], y = B[0];

    for (int i = 1; i < A.size(); ++i)
    {
        if (A[i] == x)
        {
            if (B[i] > y)
            {
                //int curr_y = B[i];

                while (B[i] != y)
                {
                    count++;
                    y++;
                }
            }
            else if (B[i] < y)
            {
                //int curr_y = B[i];

                while (B[i] != y)
                {
                    count++;
                    y--;
                }
            }
        }
        else if (A[i] > x)
        {
            if (B[i] > y)
            {
                //int curr_y = B[i];

                while (B[i] != y && A[i] != x)
                {
                    count++;
                    y++;
                    x++;
                }

                while (A[i] != x)
                {
                    count++;
                    //y++;
                    x++;
                }

                while (B[i] != y)
                {
                    count++;
                    y++;
                    //x++;
                }
            }
            else if (B[i] < y)
            {
                //int curr_y = B[i];

                while (B[i] != y && A[i] != x)
                {
                    count++;
                    y--;
                    x++;
                }

                while (A[i] != x)
                {
                    count++;
                    //y++;
                    x++;
                }

                while (B[i] != y)
                {
                    count++;
                    y--;
                    //x++;
                }
            }
            else 
            {
                while (A[i] != x)
                {
                    count++;
                    //y++;
                    x++;
                }
            }
        }
        else
        {
            if (B[i] > y)
            {
                //int curr_y = B[i];

                while (B[i] != y && A[i] != x)
                {
                    count++;
                    y++;
                    x--;
                }

                while (A[i] != x)
                {
                    count++;
                    //y++;
                    x--;
                }

                while (B[i] != y)
                {
                    count++;
                    y++;
                    //x++;
                }
            }
            else if (B[i] < y)
            {
                //int curr_y = B[i];

                while (B[i] != y && A[i] != x)
                {
                    count++;
                    y--;
                    x--;
                }

                while (A[i] != x)
                {
                    count++;
                    //y++;
                    x--;
                }

                while (B[i] != y)
                {
                    count++;
                    y--;
                    //x++;
                }
            }
            else 
            {
                while (A[i] != x)
                {
                    count++;
                    //y++;
                    x--;
                }
            }
        }
    }

    return count;
}
