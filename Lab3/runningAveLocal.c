/***************************************
* EECS2031Z Lab3 *
* Filename: runningAveLocal *
* Author: Zhang, Alan *
* Email: alanzhan@my.yorku.ca *
* EECS_username: alanzhan *
* York Student #: 215677214 * 
****************************************/

#include <stdio.h>

#define MY_PRINT(x,y,z)  printf("running average is %d / %d = %.3f\n", x,y,z)


double r_avg(int, int);


int main(int argc, char *argv[])
{
	
      int input; int count=0; int sum=0;
      double resu;

      printf("enter number (-1 to quit):  ");
      scanf("%d", &input);

      while(input != -1)
      {
        count++;
	sum = sum + input;

          resu = r_avg(sum, count);
          MY_PRINT(sum, count, resu);
 	     
          /* read again */
          printf("enter number (-1 to quit):  ");  
          scanf("%d", &input);
	
       }  
	
       return 0;
}

/*Assuming this is what runningAverage in manual is referring to
Cast variable count to double to allow for decimals*/
double r_avg(int sum, int count)
{
    double d;
    d=sum/(double)count;
    return d;
}
