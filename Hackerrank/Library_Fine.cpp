#include <iostream>

int library_fine(int return_day, int return_month, int return_year, int due_day, int due_month, int due_year) 
{
    int fine = 0;
    if (return_year == due_year)
    {
        if (return_month == due_month)
        {
            if (return_day > due_day)
            {
                fine = 15 * (return_day - due_day);
            }
        }
        else if (return_month > due_month)
        {
            fine = 500 * (return_month - due_month);
        }
    }
    else if (return_year > due_year)
    {
        fine = 10000;
    }
    return fine;
}

int main()
{
    int return_day, return_month, return_year;
    int due_day, due_month, due_year;

    std::cin >> return_day >> return_month >> return_year;
    std::cin >> due_day >> due_month >> due_year;

    std::cout << library_fine(return_day, return_month, return_year, due_day, due_month, due_year) << "\n";
}    
