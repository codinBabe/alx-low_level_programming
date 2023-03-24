#include <stdio.h>
#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{

Search or jump to…
Pull requests
Issues
Codespaces
Marketplace
Explore

@codinBabe
ehoneahobed
/
alx-low_level_programming
Public
Fork your own copy of ehoneahobed/alx-low_level_programming
Code
Issues
Pull requests
Actions
Projects
Security
Insights
alx-low_level_programming/0x03-debugging/3-print_remaining_days.c
@ehoneahobed
ehoneahobed Add solution to task 3
Latest commit c75864a on Jun 8, 2022
 History
 1 contributor
37 lines (34 sloc)  738 Bytes

#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - takes a date and prints how many days are
 * left in the year, taking leap years into account
 * @month: month in number format
 * @day: day of month
 * @year: year
 */
void print_remaining_days(int month, int day, int year)
{
	void print_remaining_days(int month, int day, int year)
{
	if ((year % 4 == 0) && (year % 400 == 0 || year % 100 != 0))
	{
		if (month >= 3 && day >= 60)
		{
			day++;
		}

		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", 366 - day);
	}
	else
	{
		if (month == 2 && day == 60)
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
		}
		else
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 365 - day);
		}
	}
}
