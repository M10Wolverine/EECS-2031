/***************************************
* EECS2031Z Lab3 *
* Filename: swap *
* Author: Zhang, Alan *
* Email: alanzhan@my.yorku.ca *
* EECS_username: alanzhan *
* York Student #: 215677214 * 
****************************************/

#include <stdio.h>


void swap(int, int);


int main( ) {
  int mainA, mainB;
  mainA = 1;
  mainB = 20000;
  swap(mainA, mainB);
  return 0;
}


void swap(int x, int y)
{
   int temp = x;
   x = y;
   y = temp;
}
