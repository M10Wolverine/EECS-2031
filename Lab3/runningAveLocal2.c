/***************************************
* EECS2031Z Lab3 *
* Filename: runningAveLocal2 *
* Author: Zhang, Alan *
* Email: alanzhan@my.yorku.ca *
* EECS_username: alanzhan *
* York Student #: 215677214 * 
****************************************/

#include <stdio.h>

#define MY_PRINT(x,y,z)  printf("running average is %d / %d = %.3f\n", x,y,z)


double r_avg(int, int);
double runningAverage(int);

static int sum=0;
static int count=0;

int main(int argc, char *argv[])
{
	
      int input;
      double resu;

      printf("enter number (-1 to quit):  ");
      scanf("%d", &input);

      while(input != -1)
      {
          resu = runningAverage(input);
          MY_PRINT(sum, count, resu);
 	     
          /* read again */
          printf("enter number (-1 to quit):  ");  
          scanf("%d", &input);
	
       }  
	
       return 0;
}

/*Calculates the average using only the input values*/
double runningAverage(int currentInput)
{
	count++;
	sum = sum+currentInput;
	
	double d;
	d=sum/(double)count;
	return d;
}
