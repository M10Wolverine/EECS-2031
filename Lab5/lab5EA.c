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

	/*if (*(array+count-1) == 23)
	{
		printf("23");
	}*/
      /* Call the function and display the return value. */
      printf("Inputs: ");
     /* display(array);*/
	int j=0;
    while (*array != -1)
    {
        printf("%d ", *array);
        array++;
    }
     
     
    /* printf("\nLargest value: %d\n", largest(array));
     */
     return 0;
 }
 
 /* display a int array */

 void display(int *arr)
 {
    while (*arr != -1)
    {
        printf("%d ", *arr);
        arr++;
    }
 }


/* Function largest() returns the largest value */
 /* in an integer array */

 int largest(int * arr)
 {
	int max, i;
	max = *arr;
	while (1)
	{
		if (*(arr+i) == -1)
		{
			break;
		}
		else if (*(arr+i) > max)
		{
			max = *(arr+i);
		}
		i++;
	}
	return max;
 }
