// Revising the Program to Determine Tomorrow’s Date, Version 2 (w/ Leap Year) - Pointers
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
void dateUpdate (const struct date *, struct date *);
int numbersOfDays(const struct date *);
char isLeapYear(const struct date *);

int main ()
{
	struct date today, tomorrow, *thisDay, *nextDay;
	
	// Inputs
	puts("Enter today date (MM DD YYYY):");
	scanf("%i%i%i", &today.month, &today.day, &today.year);
	thisDay = &today;
	
	// Processing
	nextDay = &tomorrow;
	dateUpdate(thisDay, nextDay);
	
	// Output
	printf  ("Today's date is %i/%i/%.2i.\n", thisDay->month, thisDay->day, thisDay->year % 100);
	printf  ("Tomorrow's date will be %i/%i/%.2i.\n", nextDay->month, nextDay->day, nextDay->year % 100);

	return 0;
}

// Function to calculate tomorrow's date

void dateUpdate (const struct date *pThis, struct date *pNext)
{	
	if ( pThis->day != numbersOfDays (pThis) )
	{
		pNext->month = pThis->month;
		pNext->day = pThis->day + 1;
		pNext->year = pThis->year;
	}
	else if (pThis->month == 12)
	{ // End of Year
		pNext->month = 1;
		pNext->day = 1;
		pNext->year = pThis->year + 1;
	}
	else
	{ //End of Month
		pNext->month = pThis->month + 1;
		pNext->day = 1;
		pNext->year = pThis->year;
	}
}

// Function to find the numbers of days in a month

int numbersOfDays(const struct date *d)
{
	int days;
	const int daysPerMonths[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31,30, 31};

	if ( isLeapYear(d) == '1' && d->month == 2 ) days = 29;
	else days = *(daysPerMonths + d->month - 1);

	return days;
}

// Function to determiine if it's a leap year

char isLeapYear (const struct date *d)
{
	char leapYearFlag;

	if ( (d->year % 4 == 0 && d->year % 100 != 0) || d->year % 400 == 0) leapYearFlag = '1'; // It's a leap year
	else leapYearFlag = '0'; // Not a leap year

	return leapYearFlag;
}