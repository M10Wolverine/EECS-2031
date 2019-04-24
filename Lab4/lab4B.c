/***************************************
* EECS2031Z Lab4 *
* Filename: Lab4B *
* Author: Zhang, Alan *
* Email: alanzhan@my.yorku.ca *
* EECS_username: alanzhan *
* York Student #: 215677214 * 
****************************************/

#include <stdio.h>
#include <math.h>     /* for pow() */
#include <string.h> /*for strcomp*/

#define SIZE 10
 
int my_atoi (char c[]);  /* function declaration */
   
int main(){
  int a,b;
  char arr [SIZE];
  char quit[] = "quit";

  printf("Enter a postive number or 'quit': " );
  scanf("%s", arr);
  
  /*keeps looping until quit is entered*/
  while(strcmp (quit, arr))
  {
    printf("%s\n", arr);

    a = atoi(arr);
    printf("atoi:    %d (%#o, %#X)\t%d\t%.0f\n", a,a,a, a*2, pow(a,2));

    b = my_atoi(arr);
    printf("my_atoi: %d (%#o, %#X)\t%d\t%.0f\n", b,b,b, b*2, pow(b,2));

  
   
    /* read again */
    printf("Enter a postive number or 'quit': " );
    scanf("%s", arr);
  }

  return 0;

}

/* convert an array of digit characters into a decimal int */

/* textbook did scan from left to right.
 Here you should scan from right to left. This is a little complicated but more straightforward */

int my_atoi (char c[])
{
   int last, i, number;

   number=0;	

   /*Get first instance of \0*/
   for (i=0; i<SIZE; i++)
   {
	if (c[i] == '\0')
	{
		last = i;
		break;
	} 
   }

   i=0;

   /*iterate from right starting from last-1 convert c[i] to int*/
   for (last=last-1; last>=0; last--)
   {
	number+= (c[last]-'0') * pow(10, i);
	i++;
   }

}
