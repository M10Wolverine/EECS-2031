/***************************************
* EECS2031Z Lab2 *
* Filename: Lab2C *
* Author: Zhang, Alan *
* Email: alanzhan@my.yorku.ca *
* EECS_username: alanzhan *
* York Student #: 215677214 * 
****************************************/

#include <stdio.h>

int length(char[]);
int indexOf(char[], char);
int isQuit(char[]);

int main(int argc, char *argv[])	
{	
	int l=1;

	while (l=1)
	{
		/*Fields for the character, word, word length and character index*/
		char c;
		char cArr[30];
		int cArrLength;
		int cIndex;
		
		/*Prompt and save user input*/
		printf("Enter a word and a character separated by blank: ");
		scanf("%s %c", cArr, &c);
		
		/*Check 4 letter words against quit*/	
		cArrLength=length(cArr);
		if (cArrLength == 4)
			{
				if (isQuit(cArr) == 1)
				{
					break;
				}
			}
		
		/*If not quit find the character index, output results*/
		cIndex=indexOf(cArr, c);

		printf("Input word is \"%s\". Contains %d characters. Index of '%c' in it is %d\n\n",cArr, cArrLength, c, cIndex);
		
	}
    	return 0;
}

/*Gets the length of the word*/
int length(char word[])
{
	int i=0;
	int size = 30;
	int j=0;
	
	for (j; j<size; j++)
	{
		if (word[j] == '\0')
		{
			break;
		}
		i++;
	}
	return i;
}

/*Gets the index of the specified letter/character*/
int indexOf(char word[], char c)
{
	int i;
	for (i=0; i<sizeof(word); i++)
	{
		if (word[i]==c)
		{
			return i;
		}
	}
	return -1;

}

/*Checks if the word matches quit*/
int isQuit(char word[])
{	
	char quit[]= "quit";
	int i=0;
	for (i; i<4; i++)
	{
		if (word[i]!=quit[i])
		{
			return 0;
		}
	}
	return 1;
}
