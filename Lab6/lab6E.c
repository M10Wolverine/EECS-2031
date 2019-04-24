/***************************************
* EECS2031Z Lab6 *
* Filename: Lab6E *
* Author: Zhang, Alan *
* Email: alanzhan@my.yorku.ca *
* EECS_username: alanzhan *
* York Student #: 215677214 * 
****************************************/
#include <stdio.h>
#include <stdlib.h>

void printArr(int *, int);

int  main()
{ 
  int n, i;
  int * my_array;

  printf("Size of array: ");
  scanf("%d", &n);
  
  /*Initialize and check array*/
  my_array = (int *)malloc(n*sizeof(int));
  if (my_array == NULL)
	{
		printf("Memory allocation failed!\n");
		exit(0);
	}   

  /*Set first element equal to 1 according to examples*/
  *(my_array)=1;

  for(i =1; i<n; i++)
    *(my_array+i) = i*100;

  printArr(my_array, n);

  free(my_array);

  return 0;
}

void printArr(int * arr, int n)
{
	int i=0;
 	for (i; i<n; i++)
	{
		printf("%d\n", *(arr+i));
	}
}
