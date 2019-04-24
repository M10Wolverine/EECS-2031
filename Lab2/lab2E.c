/***************************************
* EECS2031Z Lab2 *
* Filename: Lab2E *
* Author: Zhang, Alan *
* Email: alanzhan@my.yorku.ca *
* EECS_username: alanzhan *
* York Student #: 215677214 * 
****************************************/

#include <stdio.h>

int isLeap(int);

int main(int argc, char *argv[]){
  
  int year;
  
  while(1)
  {
   /*Prompt and save user input*/
   printf("Enter a year: ");
   scanf("%d", &year);
   
   /*Quit if negative year is entered*/
   if (year<0)
   {
	break;
   }
 
   /*Output appropriate  message*/
   if (isLeap(year) == 1)
   {
	printf("Year %d is a leap year\n\n", year);
   }
   else
   {
	printf("Year %d is not a leap year\n\n", year);
   }
  }
  
 
  return 0;

}

/*Determines if year is leap year*/
int isLeap(int year)
{
	
	
	if (year % 400 == 0)
	{
		return 1;
	}
	
	if (year % 4 ==0 && year %100 !=0)
	{
		return 1;
	}
	return 0;
}


