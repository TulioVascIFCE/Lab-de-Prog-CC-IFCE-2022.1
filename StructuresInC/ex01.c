// Program to Illustrate a Structure

#include <stdio.h>

int main (void)
{
	struct  date
	{	
		int month;
		int day;
		int year;
	};

	struct date today;

	today.month = 6;
	today.day = 17;
	today.year = 2022;

	printf  ("Today's date is %i/%i/%.2i.\n", today.month, today.day, today.year % 100);

	return 0;
}