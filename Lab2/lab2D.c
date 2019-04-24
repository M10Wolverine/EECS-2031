/***************************************
* EECS2031Z Lab2 *
* Filename: Lab2D *
* Author: Zhang, Alan *
* Email: alanzhan@my.yorku.ca *
* EECS_username: alanzhan *
* York Student #: 215677214 * 
****************************************/

#include <stdio.h>



/* copy the user input to output */

int main(){
  
  /*Array to store counter*/
  int intCnt[10]={0};

  char c = getchar();
  
  while( c != EOF)
  {
   /*If c is 0 to 9 increment the appropriate counter by 1*/
   if (c>='0' && c<='9')
	{
		intCnt[c-'0']++;
	}
	
    c =  getchar();  /* read again */
  }
  
  /*Print out counts*/
  int i;
  for (i=0; i<10;i++)
  {
	printf("%d: %d\n", i, intCnt[i]);
  }
 
  return 0;

}


