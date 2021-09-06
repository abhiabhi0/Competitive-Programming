//https://leetcode.com/problems/is-subsequence/

#include <iostream>
#include <vector>

bool is_subsequence(std::string& s, std::string& t)
{
	int i = 0, j = 0;
        bool res = false;
        
        while (i < s.size() && j < t.size())
        {
            if (s[i] == t[j])
            {
                i++;
                j++;
            }
            else 
            {
                j++;
            }
        }
        
        if ( i == s.size())
        {
            res = true;
        }
    return res;
}

int main()
{
	std::string s, t;
	std::cin >> s;
	std::cin >> t;

	bool res = is_subsequence(s, t);
	std::cout << res << "\n";
}