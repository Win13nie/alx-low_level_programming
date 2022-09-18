#include <stdio.h>
#include "main.h"

/**
 * main - takes a date and prints how many days are left in an year taking
 * leap year into account
 * convert_day - convert date to day in the year
 * Return: 0
 */

int main(void)
{
	int month;
	int day;
	int year;

	printf("Date:%02d/%02d/%04d\n", month, day, year);
	day = convert_day(month, day);

	print_remaining_days(month, day, year);

	return (0);
}
