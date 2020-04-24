#include <iostream>
#include <string>

long repeated_string(std::string sub_str, long str_len) {
    long count = 0;
    if (str_len > sub_str.size())
    {
        long num_sub_str = str_len / sub_str.size();
        long remaining_str_len = str_len % sub_str.size();

        long i = 0;
        while (i < sub_str.size())
        {
            if (sub_str[i] == 'a')
            {
                count++;
            }
            i++;
        }

        count = count * num_sub_str;

        i = 0;
        while (i < remaining_str_len)
        {
            if (sub_str[i] == 'a')
            {
                count++;
            }
            i++;
        }
    }
    else
    {
        long i = 0;
        while (i < str_len)
        {
            if (sub_str[i] == 'a')
            {
                count++;
            }
            i++;
        }
    }
    return count;
}

int main()
{
    std::string input_str;
    long final_str_length;

    std::cin >> input_str;
    std::cin >> final_str_length;

    std::cout << repeated_string(input_str, final_str_length) << "\n";

    return 0;
}
