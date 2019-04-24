/***************************************
* EECS2031Z Lab5 *
* Filename: Lab5A2 *
* Author: Zhang, Alan *
* Email: alanzhan@my.yorku.ca *
* EECS_username: alanzhan *
* York Student #: 215677214 * 
****************************************/
#include <stdio.h>

void swapIncre(int*, int*, int*);
void swap (int*, int*);

int main( ) {
  int a, b,c; 

  /* Input three integers*/
  scanf("%d %d %d", &a, &b,&c);
  while(a != -1) {
     printf("Original inputs:   a:%-4d  b:%-4d  c:%-4d\n", a, b,c);     
     swapIncre(&a,&b,&c);
     printf("Rearranged inputs: a:%-4d  b:%-4d  c:%-4d\n\n", a, b,c);  

     /* read again */
     scanf("%d %d %d", &a, &b,&c);
   }

}

void swapIncre(int* x, int* y, int* z){
   swap(x, z);
   *y *= 2;
}

void swap(int* x, int*z)
{
   int temp = *x;
   *x = *z;
   *z = temp;
}
