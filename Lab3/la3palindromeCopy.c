/***************************************
* EECS2031 – Lab3 *
* Author: Zhang, Alan *
* Email: alanzhan@my.yorku.ca *
* eecs_username: alanzhan *
* york_num: 215677214 *
****************************************/
#include <stdio.h>
#include <string.h>

int isPalindrome(char[]);

int main(int argc, char *argv[])
{
	char input[30];
	int yes;	
	char quit[] = "quit";
	int endIndex;	
	
	int i;
	for (i=0; i<sizeof(input); i++)
	{
		if (input[i] == '\0'
	}

	while (1)
   {
	scanf("%s", input);
	
	if (strcmp(input, quit))
	{
		/*break;*/
	}
	
	yes = isPalindrome(input);

	if (yes == 1)
	{
		printf("Is a palindrome\n\n");
	}
	else
	{
		printf("is not a palindrome\n\n");
	}
   }
return 0;
}

int isPalindrome(char input[])
{
	int i;
	int endIndex;
	
	
	for (i=0; i<sizeof(input); i++)
	{
		if (input[i] == '\0')
		{
			endIndex=i;
			break;
		}
	}
	
	if (endIndex % 2 ==0)
	{
		for (i=0; i<endIndex/2-1; i++)
		{
			if (input[i] != input[endIndex-1-i])
			{
				return 0;
			}
		}
		
	}
	else
	{
		for (i=0; i<(endIndex-1)/2; i++)
		{
			if (input[i] != input[endIndex-1-i])
			{
				return 0;
			}
		}
	}

	return 1;
}
