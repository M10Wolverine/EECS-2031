/***************************************
* EECS2031Z Lab3 *
* Filename: runningAveGlobal *
* Author: Zhang, Alan *
* Email: alanzhan@my.yorku.ca *
* EECS_username: alanzhan *
* York Student #: 215677214 * 
****************************************/

#include <stdio.h>

#define MY_PRINT(x,y,z)  printf("running average is %d / %d = %.3f\n", x,y,z)

/*External variables and function in function.c*/
extern int sum, count, input;
extern double resu;
void runningAverage();

int main(int argc, char *argv[])
{

      printf("enter number (-1 to quit):  ");
      scanf("%d", &input);

      while(input != -1)
      {
	runningAverage();
        MY_PRINT(sum, count, resu);
 	     
          /* read again */
          printf("enter number (-1 to quit):  ");  
          scanf("%d", &input);
	
       }  
	
       return 0;
}
