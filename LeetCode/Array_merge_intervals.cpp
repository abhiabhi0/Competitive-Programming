class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        auto lambda_sort = [](vector<int>& a, vector<int>& b)
                            {
                                if (a[0] == b[0])
                                {
                                    return a[1] < b[1];
                                }
                                else if (a[0] < b[0])
                                {
                                    return true;
                                }
                                return false;
                            };
        
        sort(intervals.begin(), intervals.end(), lambda_sort);
        vector<vector<int>> r;
        int n = intervals.size();
        int s = intervals[0][0];
        int e = intervals[0][1];
        
        for (int i = 1; i < n; ++i)
        {
            if (e >= intervals[i][0])
            {
                e = max(e,intervals[i][1]);
                
                if (s > intervals[i][0])
                {
                    s = min(s, intervals[i][0]);
                }
            }
            else 
            {
                r.push_back({s, e});
                s = intervals[i][0];
                e = intervals[i][1];
            }
        }
        r.push_back({s, e});
        
        return r;
    }
};
