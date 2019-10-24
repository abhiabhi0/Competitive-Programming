//https://www.hackerearth.com/problem/algorithm/roy-and-code-streak/

#include <iostream>
#include <algorithm>
#include <unordered_set>

int main() 
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    unsigned int turns, no_of_submissions, s_id, result;
    std::unordered_set<unsigned int> submissions;

    std::cin >> turns;
    while (turns--) 
    {
        unsigned int count = 0, max_count = 0;

        submissions.clear();

        std::cin >> no_of_submissions;

        for (unsigned int i = 0; i < no_of_submissions; ++i) 
        {
            std::cin >> s_id >> result;

            if (result == 1 && submissions.count(s_id) == 0)
            {
                count++;
                submissions.insert(s_id);
            }
            else if (result == 0)
            {
                count = 0;
            }
            max_count = std::max(count, max_count);
        }
        std::cout << max_count << "\n";
    }
}
