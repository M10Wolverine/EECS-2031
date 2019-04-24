/***************************************
* EECS2031Z Lab5 *
* Filename: Lab5D *
* Author: Zhang, Alan *
* Email: alanzhan@my.yorku.ca *
* EECS_username: alanzhan *
* York Student #: 215677214 * 
****************************************/
#include <stdio.h>
#include <string.h>

#define SIZE 40

int sortArray (char *);

#define quit "quit\n"

int main ()
{   
   int result;  char c; int i;  int count=0;
   char arr[SIZE];
  
   /*read in*/
   fgets(arr,SIZE,stdin);
   while (strcmp(arr, quit))
   {
      arr[strlen(arr)-1] = '\0'; // remove the trailing \n

      /*Sort and print sorted array*/
      sortArray(arr);
      printf ("%s\n\n", arr);
 
      fgets(arr,SIZE,stdin);
    }
    
    return 0;
}

int sortArray(char *str)
{
	int length = strlen(str);
	int min;
	char temp;
	int i, j;
	
	/*Do selection sort*/
	for (i=0; i<length; i++)
	{
		min = i;	
		for (j=i+1; j<length; j++)
		{
			if (*(str+j) < *(str+min))
			{
				min = j;
			} 
		}
		temp = *(str+i);
		*(str+i) = *(str+min);
		*(str+min) = temp;
	}
}


