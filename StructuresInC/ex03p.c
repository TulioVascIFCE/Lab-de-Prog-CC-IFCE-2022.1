// Revising the Program to Determine Tomorrow’s Date, Version 1 (w/ Leap Year) - Pointers
/*
Suppose you want to write a simple program that accepts today’s date as input and displays 
tomorrow’s date to the user.
*/

#include <stdio.h>

// Global Structure
struct date
{
	int month;
	int day;
	int year;
};

// Functions Prototype
int numbersOfDays(struct date *);
char isLeapYear(struct date *);

int main ()
{
	struct date today, tomorrow, *dateP;
	
	// Inputs
	puts("Enter today date (MM DD YYYY):");
	scanf("%i%i%i", &today.month, &today.day, &today.year);

	dateP = &today;
	
	// Processing
	if ( dateP->day != numbersOfDays (dateP) )
	{
		tomorrow.month = dateP->month;
		tomorrow.day = dateP->day + 1;
		tomorrow.year = dateP->year;
	}
	else if (dateP->month == 12)
	{ // End of Year
		tomorrow.month = 1;
		tomorrow.day = 1;
		tomorrow.year = dateP->year + 1;
	}
	else
	{ //End of Month
		tomorrow.month = dateP->month + 1;
		tomorrow.day = 1;
		tomorrow.year = dateP->year;
	}

	// Output
	printf  ("Today's date is %i/%i/%.2i.\n", dateP->month, dateP->day, dateP->year % 100);
	printf  ("Tomorrow's date will be %i/%i/%.2i.\n", tomorrow.month, tomorrow.day, tomorrow.year % 100);

	return 0;
}

// Function to find the numbers of days in a month

int numbersOfDays(struct date *d)
{
	int days;
	const int daysPerMonths[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31,30, 31};

	if ( isLeapYear(d) == '1' && d->month == 2 ) days = 29;
	else days = *(daysPerMonths + d->month - 1);

	return days;
}

// Function to determiine if it's a leap year

char isLeapYear (struct date *d)
{
	char leapYearFlag;

	if ( (d->year % 4 == 0 && d->year % 100 != 0) || d->year % 400 == 0) leapYearFlag = '1'; // It's a leap year
	else leapYearFlag = '0'; // Not a leap year

	return leapYearFlag;
}