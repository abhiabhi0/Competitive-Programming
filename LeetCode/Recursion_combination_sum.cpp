class Solution {
public:
    void func(vector<int>& candidates, int target, int index, vector<int>& combo,
             vector<vector<int>>& ans)
    {
        if (index == candidates.size())
        {
            if (target == 0)
            {
                ans.push_back(combo);
            }
            return;
        }
        
        if (candidates[index] <= target)
        {
            combo.push_back(candidates[index]);
            func(candidates, target-candidates[index], index, combo, ans);
            combo.pop_back();
        }
        
        func(candidates, target, index+1, combo, ans);
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> combo;
        
        func(candidates, target, 0, combo, ans);
        return ans;
    }
};
