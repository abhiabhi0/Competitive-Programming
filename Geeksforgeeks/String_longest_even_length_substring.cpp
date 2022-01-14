int longest_length(string& s)
{
    int n = s.size();
    vector<int> ps(n);
    ps[0] = s[0]-'0';
    
    for (int i = 1; i < n; ++i)
    {
        ps[i] = ps[i-1] + (s[i] - '0');
    }
    
    int k = n/2;
    
    while (k > 0)
    {
        for (int i = k-1; i < n-k; i++)
        {
            int left;
            
            if (i-k >= 0)
            {
                left = ps[i] - ps[i-k];
            }
            else 
            {
                left = ps[i];
            }
            if (left == (ps[k+i] - ps[i]))
            {
                return 2*k;
            }
        }
        k--;
    }
    return 0;
}
