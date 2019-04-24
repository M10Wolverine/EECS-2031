/***************************************
* EECS2031Z Lab2 *
* Filename: Lab2B *
* Author: Zhang, Alan *
* Email: alanzhan@my.yorku.ca *
* EECS_username: alanzhan *
* York Student #: 215677214 * 
****************************************/

#include <stdio.h>

int isLower(char);

/* copy the user input to output */

int main(){

  char c = getchar();
 
  while( c != EOF)
  {
   /*Checks if c is lower and converts if so*/
   if (isLower(c)==1)
	{
		/*Converts to upper value by subtracting 32 from ascii value*/
		c=c-32;
	}
	
 	putchar(c);
    c =  getchar();  /* read again */
  }

  return 0;

}

/*Checks if c is lower case by comparing to ascii value ranges*/
int isLower(char c)
{
	if (c>='a' && c<='z')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
