/***************************************
* EECS2031Z Lab1 *
* Filename: Lab1B *
* Author: Zhang, Alan *
* Email: alanzhan@my.yorku.ca *
* EECS_username: alanzhan *
* York Student #: 215677214 * 
****************************************/

#include <stdio.h>


float sum(float, float);
int main()
{
   float x =2.2, y=3.3;
   float su= sum(x,y);
   printf( "%f and %f = %f\n", x,y, su);

   return 0;

}

/* function definition */
float sum (float i, float j){
   return i+j;             
}