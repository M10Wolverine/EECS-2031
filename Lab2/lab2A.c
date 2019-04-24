/***************************************
* EECS2031Z Lab2 *
* Filename: Lab2A *
* Author: Zhang, Alan *
* Email: alanzhan@my.yorku.ca *
* EECS_username: alanzhan *
* York Student #: 215677214 * 
****************************************/

#include <stdio.h>


int isDigit(char);

int main(int argc, char *argv[])	
{	
	while (1)
	{
		int n;
		char c;
		int sum;
		
		/*Prompt and store user input*/
		printf("Enter an integer and a character separated by blank>");
		scanf("%d %c", &n, &c);
		
		/*Check if n is -10000 and end program if so*/
		if (n == -10000)
		{
			break;
		}	
		
		/*Checks if c is a digit and calculate the sum if so*/
		if (isDigit(c)==1)
		{
			sum = n + (c-'0'); 
			printf("Character '%c' represents a digit. Sum of %d and %c is %d\n\n", c, n, c,  sum); 
	
		}
		else
		{
			printf("Character '%c' does not represent a digit\n\n", c);
		}
	}
    	return 0;
}

/*Checks if c is a digit*/
int isDigit(char c)
{
	if (c>='0' && c<='9')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
