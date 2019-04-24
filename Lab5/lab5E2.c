/***************************************
* EECS2031Z Lab5 *
* Filename: Lab5E2 *
* Author: Zhang, Alan *
* Email: alanzhan@my.yorku.ca *
* EECS_username: alanzhan *
* York Student #: 215677214 * 
****************************************/
/* Passing an array to a function. */

#include <stdio.h>

#define MAX 20
 

int largest(int * x, int);
void display(int *arr, int);

 main(int argc, char *argv[])
 {
     int array[MAX], count;

     /* Input MAX values from the keyboard. */
     int i;  count=0;
     
     while ( scanf("%d", &i) != EOF && count<20){
        *(array + count) = i; // store in array[count]
        count++;
     }

      /* Call the function and display the return value. */
      printf("Inputs: ");
      display(array, count);

     
     
     printf("\nLargest value: %d\n", largest(array, count));
     
     return 0;
 }
 
 /* display a int array */

 void display(int *arr, int length)
 {
	int i = 0;

	/*Iterate and print array until -1 is reached*/
	for (i; i<length; i++)
	{	
		printf("%d ", *(arr+i));
	}
 }


/* Function largest() returns the largest value */
 /* in an integer array */

 int largest(int * arr, int length)
 {
	int max, i;
	max = *arr;

	/*Iterate through array until -1 is reached*/
	for (i=0; i<length; i++)
	{
		if (*(arr+i) > max)
		{
			max = *(arr+i);
		}
	}
	return max;
 }
