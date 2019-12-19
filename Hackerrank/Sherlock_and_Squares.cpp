#include <iostream>
#include <cmath>

int num_of_squares(int first_num, int last_num) {
    int sr = sqrt(first_num);
    int count = 0;
    while ((sr * sr) <= last_num)
    {
        if ((sr * sr) >= first_num)
            count++;
        sr++;
    }
    return count;
}

int main()
{
    int test_cases;
    std::cin >> test_cases;

    while (test_cases--)
    {
        int first_num, last_num;
        std::cin >> first_num >> last_num;

        std::cout << num_of_squares(first_num, last_num) << "\n";
    }
}
