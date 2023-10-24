#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - Takes a date and prints how many days are
 * left in the year, taking leap years into account.
 * @month: Month in number format.
 * @day: Day of the month.
 * @year: Year.
 * Return: void
 */
void print_remaining_days(int month, int day, int year)
{
    int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
    {
        days_in_month[2] = 29; // February has 29 days in a leap year
    }

    if (month < 1 || month > 12 || day < 1 || day > days_in_month[month])
    {
        printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
    }
    else
    {
        int day_of_year = 0;

        for (int i = 1; i < month; i++)
        {
            day_of_year += days_in_month[i];
        }

        day_of_year += day;

        printf("Day of the year: %d\n", day_of_year);
        printf("Remaining days: %d\n", 365 + (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0) ? 1 : 0) - day_of_year);
    }
}

