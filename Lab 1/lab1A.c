/***************************************
* EECS2031Z Lab1 *
* Filename: Lab1A *
* Author: Zhang, Alan *
* Email: alanzhan@my.yorku.ca *
* EECS_username: alanzhan *
* York Student #: 215677214 * 
****************************************/

#include <stdio.h>



int main(int argc, char *argv[])
{
	int month;
	int day;
	int year; 
    	printf("Enter month, day and year separated by spaces: ");
	scanf("%d %d %d", &month, &day, &year);

	printf("The input '%d %d %d' is formatted as %d/%d/%d and %d-%d-%d\n", month, day, year, year, month, day, year, month, day);
    	return 0;
}