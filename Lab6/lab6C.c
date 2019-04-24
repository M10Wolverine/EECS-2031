/***************************************
* EECS2031Z Lab6 *
* Filename: Lab6C *
* Author: Zhang, Alan *
* Email: alanzhan@my.yorku.ca *
* EECS_username: alanzhan *
* York Student #: 215677214 * 
****************************************/

#include <stdio.h>
#include <string.h>

void printArray(char** , int );
void exchange (char *[]);

main(){

  char * inputs[8] = {"this is input 0, giraffes", "this is input 1, zebras",  "this is input 2, monkeys", 
                      "this is input 3, kangaroos"};

  char arr1 [] = "this is input 4, do you like them?";
  char arr2 [] = "this is input 5, yes";
  char arr3 [] = "this is input 6, thank you";
  char arr4 [] = "this is input 7, bye";

  inputs[4] = arr1;
  inputs[5] = arr2;
  inputs[6] = arr3;
  inputs[7] = arr4;

	char *temp;

  // display the array by calling printArr
	printArray(inputs, 8);

  // swap pointee of first and second
  	temp = inputs[0];
	inputs[0] = inputs[1];
	inputs[1] = temp;
	
  // call exchange() to swap some other 'rows';
  	exchange(inputs);

   printf("===========================\n");

  // display the array again
	printArray(inputs, 8);

	return 0;
}

void printArray(char ** records, int n)
{
	int i=0;
	for (i; i<n; i++)
	{
		printf("[%d] -*-> %s\n",i , *(records+i));
	}
}

void exchange(char* records[])
{
	char * temp;
	temp = (records[2]);
	(records[2]) = (records[3]);
	(records[3]) = temp;
	temp = (records[4]);
	records[4] = records[5];
	records[5] = temp;
}
