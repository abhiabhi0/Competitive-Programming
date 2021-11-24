class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> res;
        res.push_back(first);
        for (auto& e:encoded)
        {
            res.push_back(first^e);
            first = res.back();
        }
        return res;
    }
};
