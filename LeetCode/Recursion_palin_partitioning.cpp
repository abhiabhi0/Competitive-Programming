class Solution {
public:
    bool is_palin(string& s)
    {
        int l = 0, r = s.size()-1;
        
        while (l < r)
        {
            if (s[l++] != s[r--])
            {
                return false;
            }
        }
        return true;
    }
    void func(string& s, int index, vector<vector<string>>& ans,
        vector<string>& sub)
    {
        if (index >= s.size())
        {
            ans.push_back(sub);
            return;
        }
        
        string substring = "";
        for (int i = index; i < s.size(); ++i)
        {
            substring += s[i];
            if (is_palin(substring))
            {
                sub.push_back(substring);
                func(s, i+1, ans, sub);
                sub.pop_back();
            }
        }
    }
        
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> sub;
        
        func(s, 0, ans, sub);
        return ans;
    }
};
