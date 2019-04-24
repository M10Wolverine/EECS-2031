/***************************************
* EECS2031 – Lab3 *
* Author: Zhang, Alan *
* Email: alanzhan@my.yorku.ca *
* eecs_username: alanzhan *
* york_num: 215677214 *
****************************************/
#include <stdio.h>
#include <string.h>

#define SIZE 30

int isPalindrome(char[]);

int main(int argc, char *argv[])
{
	char input[SIZE];
	int yes;	
	char quit[] = "quit";
	int endIndex;	
	

   while (1)
   {
	scanf("%s", input);
	
	/*Checks input against quit*/
	if (strcmp(input, quit)==0)
	{
		break;
	}
	
	/*Stores the result of isPalindrome test and output appropriate message*/
	yes = isPalindrome(input);

	if (yes == 1)
	{
		printf("\nIs a palindrome\n\n");
	}
	else
	{
		printf("\nIs not a palindrome\n\n");
	}
   }
return 0;
}

/*Reverses a word and checks if its a palindrome*/
int isPalindrome(char input[])
{
	int i;
	int endIndex;
	int j;
	
	/*Determine where the word ends*/
	for (i=0; i<SIZE; i++)
	{
		if (input[i] == '\0')
		{
			endIndex=i;
			break;
		}
	}
	
	/*Print the reversed word*/
	for (i=endIndex; i>=0; i--)
	{
		printf("%c", input[i]);
	}

	/*Compare each half of the input word if input is even letters long*/
	if (endIndex % 2 ==0)
	{
		j=endIndex-1;	
		for (i=0; i<endIndex/2; i++)
		{
			if (input[i] != input[j])
			{
				return 0;
			}
			j--;
		}
		
	}
	/*Compare up to the midpoint of word if input is odd letters long*/
	else
	{
		j=endIndex-1;
		for (i=0; i<(endIndex+1)/2; i++)
		{
			if (input[i] != input[endIndex-1-i])
			{
				return 0;
			}
		j--;
		}
	}

	return 1;
}
