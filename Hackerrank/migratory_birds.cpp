#include <iostream>
#include <vector>
#include <algorithm>

unsigned short common_type(std::vector<unsigned short>& types)
{
    std::sort(types.begin(), types.end());
    std::vector<unsigned int> type_count(6, 0); //stores count of each bird whose id == index

    unsigned int count = 1;

    for (unsigned int i = 1; i < types.size(); ++i)
    {
        if (types[i] == types[i-1])
        {
            count++;
        }
        else if (types[i] != types[i-1])
        {
            type_count[ types[i-1] ] = count;
            count = 1;
        }
    }
    type_count[ types.back() ] = count;

    unsigned int max_val = type_count[0];
    unsigned short  min_index = 0;

    for (unsigned short i = 1; i < type_count.size(); ++i)
    {
        if (type_count[i] > max_val)
        {
            max_val = type_count[i];
            min_index = i;
        }
    }
    return min_index;
}

int main()
{
    unsigned int num_of_birds;
    std::cin >> num_of_birds;
    std::vector<unsigned short> types(num_of_birds);

    for (unsigned int i = 0; i < num_of_birds; ++i)
    {
        std::cin >> types[i];
    }

    std::cout << common_type(types) << "\n";
}
