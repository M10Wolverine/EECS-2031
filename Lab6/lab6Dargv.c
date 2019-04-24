/***************************************
* EECS2031Z Lab6 *
* Filename: Lab6 *
* Author: Zhang, Alan *
* Email: alanzhan@my.yorku.ca *
* EECS_username: alanzhan *
* York Student #: 215677214 * 
****************************************/
#include <stdio.h>

int getSum(char *[], int);
int getSumP(char **, int);

int main(int argc, char*argv[])
{
	int i;
	int num;

	printf("%d arguments excluding \"%s\"\n", argc-1, argv[0]);
	
	/*Convert to int and print the first entered element*/
	sscanf(argv[1], "%d", &num);
	printf("%d", num);

	/*Print the rest of the entered values*/
	for (i=2; i<argc; i++)
	{
		sscanf(argv[i], "%d", &num);
		printf(" + %d", num);
	}

	/*Print sums*/
	printf("\n= %d", getSum(argv, argc));
	printf("\n= %d\n", getSumP(argv, argc));
	
	return 0;
}

int getSum(char * input[], int n)
{
	int sum =0;
	int i =1;
	int num;
	for (i; i<n; i++)
	{
		sscanf(input[i], "%d", &num);
		sum+= num;
	}
	return sum;
}

int getSumP(char ** input, int n)
{
	int sum = 0;
	int i = 1;
	int num;
	for (i; i<n; i++)
	{
		sscanf(*(input+i), "%d", &num);
		sum+=num;
	}
	return sum;
}
