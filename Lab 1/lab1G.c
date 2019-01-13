/***************************************
* EECS2031Z Lab1 *
* Filename: Lab1G *
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
  int m=0;
  int mlast=1;

  while( c != EOF)
  {
   if (c!='\n'&&c!='\r')
   {
    n++;
    mlast=0;
   }
   else if (c == '\n' || c== EOF)
   {
    m++;
    mlast=1;
   }

    c =  getchar();  /* read again */
  }
  
  if (mlast == 0)
  {
  m++;
  }
  printf("# of chars: %d\n", n);
  printf("# of lines: %d\n", m);

  return 0;

}
