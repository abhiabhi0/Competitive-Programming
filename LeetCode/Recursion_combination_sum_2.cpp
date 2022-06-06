class Solution {
public:
    void func(vector<int>& candidates, int target, int index, vector<int>& combo, vector<vector<int>>& res)
    {
        if (target == 0)
        {
            res.push_back(combo);
            return;
        }
        
        if (index == candidates.size())
        {
            return;
        }
        
        for (int i = index; i < candidates.size(); ++i)
        {
            if (candidates[i] > target)
            {
                break;
            }
            
            if (i == index || (i > index && candidates[i] != candidates[i-1]))
            {
                combo.push_back(candidates[i]);
                func(candidates, target - candidates[i], i+1, combo, res);
                combo.pop_back();
            }
        }
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> combo;
        
        sort(candidates.begin(), candidates.end());
        
        func(candidates, target, 0, combo, res);
        return res;
    }
};
