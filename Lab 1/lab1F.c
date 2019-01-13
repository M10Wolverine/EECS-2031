/***************************************
* EECS2031Z Lab1 *
* Filename: Lab1F *
* Author: Zhang, Alan *
* Email: alanzhan@my.yorku.ca *
* EECS_username: alanzhan *
* York Student #: 215677214 * 
****************************************/

#include <stdio.h>

/* copy the user input to output */

int main(){

  char c = getchar();
  int n=0;
  

  while( c != EOF)
  {
   if (c!='\n'&&c!='\r')
   {
    n++;
   }

    c =  getchar();  /* read again */
  }
  printf("# of chars: %d\n", n);

  return 0;

}
