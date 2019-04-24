/***************************************
* EECS2031Z Lab5 *
* Filename: Lab5E *
* Author: Zhang, Alan *
* Email: alanzhan@my.yorku.ca *
* EECS_username: alanzhan *
* York Student #: 215677214 * 
****************************************/
/* Passing an array to a function. */

#include <stdio.h>

#define MAX 20
 

int largest(int * x);
void display(int *arr);

 main(int argc, char *argv[])
 {
     int array[MAX], count;

     /* Input MAX values from the keyboard. */
     int i;  count=0;
     
     while ( scanf("%d", &i) != EOF && count<20){
        *(array + count) = i; // store in array[count]
        count++;
     }

	/*Add the terminator if array is not filled*/
	if (count <= 20)
	{
		*(array + count) = -1;
	}

      /* Call the function and display the return value. */
      printf("Inputs: ");
      display(array);

     
     
     printf("\nLargest value: %d\n", largest(array));
     
     return 0;
 }
 
 /* display a int array */

 void display(int *arr)
 {
	/*Iterate and print array until -1 is reached*/
	while (*arr != -1)
	{	
		printf("%d ", *(arr));
		arr++;
	}
 }


/* Function largest() returns the largest value */
 /* in an integer array */

 int largest(int * arr)
 {
	int max;
	max = *arr;

	/*Iterate through array until -1 is reached*/
	while (*arr != -1)
	{
		if (*arr > max)
		{
			max = *arr;
		}
		arr++;
	}
	return max;
 }
