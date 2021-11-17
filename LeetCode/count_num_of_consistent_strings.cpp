class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        
        int alpha = 0, count = 0;
        
        for (auto& c : allowed)
        {
            int shift = c - 'a';
            alpha = alpha | (1 << shift);  
        }
        
        for (auto& w : words)
        {
            bool is = true;
            for (auto& c : w)
            {
                if ((alpha & (1 << (c - 'a'))) == 0)
                {
                    is = false;
                    break;
                }
            }
            
            if (is)
            {
                count++;
            }
        }
        
        return count;
        
    }
};
