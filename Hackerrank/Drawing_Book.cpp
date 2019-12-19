#include <iostream>
#include <vector>
#include <algorithm>

int flips_count(int n, int p) 
{
    if (p % 2 == 0)
    {
        p = p + 1;
    }

    int page_num = 1;
    std::vector<int> right_page_number;
    for (int i = 0; i <= n/2; ++i)
    {
        right_page_number.push_back(page_num);
        page_num += 2;
    }

    auto index = std::find(right_page_number.begin(), right_page_number.end(), p);

    int num_of_flips_from_front = std::distance(right_page_number.begin(), index);
    int num_of_flips_from_back = (n/2) - std::distance(right_page_number.begin(), index);

    int min_flips = std::min(num_of_flips_from_front, num_of_flips_from_back);

    return min_flips;
}

int main()
{
    int n, p;
    std::cin >> n; //number of pages in the book
    std::cin >> p; //page to open

    int result = flips_count(n, p);
    std::cout << result << "\n";
    return 0;
}
