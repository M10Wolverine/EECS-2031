/***************************************
* EECS2031Z Lab1 *
* Filename: Lab1D *
* Author: Zhang, Alan *
* Email: alanzhan@my.yorku.ca *
* EECS_username: alanzhan *
* York Student #: 215677214 * 
****************************************/

#include <stdio.h>



float sum(float, float);
int main()
{
   printf("Enter the number of interactions: ");
   int n;
   scanf("%d", &n);
   
   int i;
   for (i=0; i<n; i++)
   {
   printf("\nEnter two float numbers separated by ##: ");
   
   float x , y;

   scanf("%f##%f", &x, &y);
   float su= sum(x,y);
   printf( "%f + %f = %f\n", x,y, su);
   }
   return 0;

}

/* function definition */
float sum (float i, float j){
   return i+j;             
}
