/***************************************
* EECS2031Z Lab4 *
* Filename: Lab4F *
* Author: Zhang, Alan *
* Email: alanzhan@my.yorku.ca *
* EECS_username: alanzhan *
* York Student #: 215677214 * 
****************************************/

#include <stdio.h>

int main(int argc, char *argv[])
{
	int age = 10;
	int age2 = 100;

	int *ptr;
	int *ptr2;

	/*Save age location to ptr and output*/
	ptr = &age;
	printf("age: %d %d\n", age, *ptr); 

	/*Set age to 14 and output*/
	*ptr = 14;
	printf("age: %d %d\n", age, *ptr);

	/*Set age2 equal to age2 using ptrs*/
	ptr2 = &age2;
	*ptr2 = *ptr;
	printf("age2:%d %d\n", age2, *ptr2);

	/*Set ptr2 to age, decrease age and output*/
	ptr2 = ptr;
	*ptr2-=1;
	printf("age: %d %d %d\n", age, *ptr, *ptr2);
	printf("%p %p %p\n", &age, ptr, ptr2);	

	return 0;
}
