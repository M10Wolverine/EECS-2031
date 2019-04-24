/***************************************
* EECS2031Z Lab1 *
* Filename: Lab1A *
* Author: Zhang, Alan *
* Email: alanzhan@my.yorku.ca *
* EECS_username: alanzhan *
* York Student #: 215677214 * 
****************************************/

#include <stdio.h>
#include <string.h>

#define ODDMONTH 31
#define EVENMONTH 30


int isLeap (int);

char quit[] = "quit\n";

int main(){ 

  char input[30];
  int i; int dates;
  int day, year, month;
  int numDays;


  printf("Enter 'month-day year' : " );
  fgets(input, 30, stdin);  /* read in the whole line */

  while (strcmp(quit, input) ) /*Keeps running until quit is entered*/
   {
    /* manipulate the input, count days and display */ 
	
    /*Tokenize input, count numDays and return answer*/
    sscanf(input, "%d-%d %d", &month, &day, &year);	

    numDays = countDays(year, month, day);

    printf("%d days of year %d have elapsed\n\n", numDays, year);

    // read again
    printf("Enter 'month-day year': " );
    fgets(input, 30, stdin);  /* read in the whole line */
  }
 
  return 0;
 

}


int countDays(int y, int m, int d)
{
   int numDays=0;   

   /*Add the days from previous months*/
   if (m % 2 == 1)
   {
	numDays += (EVENMONTH + ODDMONTH) * ((m-1)/2);
   }
   else
   {
	numDays += ODDMONTH * (m/2);
	numDays += EVENMONTH * ((m/2)-1);
   }
   numDays += d;

   /*If the month is greater than 2 determine if its a leap year*/
   if (m>2)
   {	
	/*If is leapyear subtract 1 for 29 days in Feb*/
	if (isLeap(y))
	{
	   numDays-=1;
	}
	/*Otherwise subtract 2 for 28 days*/
	else
	{
	   numDays-=2;
	}
   }
   return numDays;
}

