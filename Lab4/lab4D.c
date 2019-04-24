/***************************************
* EECS2031Z Lab4 *
* Filename: Lab4D *
* Author: Zhang, Alan *
* Email: alanzhan@my.yorku.ca *
* EECS_username: alanzhan *
* York Student #: 215677214 * 
****************************************/

#include <stdio.h>
#include <string.h>
#include <math.h>

#define SIZE 10
#define SIZE2 40

int main(int argc, char *argv[])
{
	char quit[] = "xxx";
	 
   	char name[SIZE], wage[SIZE],  age[SIZE];
    	char resu[SIZE2], resu2[SIZE2], resu3[SIZE2];

	int ageNum;
	float wageNum;
	int wageLower, wageUpper;

     	printf("Enter name, age and wage (xxx to quit): ");
     	scanf("%s %s %s", name, age, wage);
     	while (strcmp(quit, name))
     	{  
	  	/*Capitalize first letter*/
		name[0] = toupper(name[0]);		

		/*Increment age by 10*/
		sscanf(age, "%d", &ageNum);
		ageNum+=10;

		/*Double wage*/
		sscanf(wage, "%f", &wageNum); 
   		wageNum=wageNum*2.0;

		/*Get floor*/
		wageLower=floor(wageNum);
		/*Get ceiling*/
		wageUpper= ceil(wageNum);

		/*Copy resu to resu2 and resu3 then print them*/
		sprintf(resu, "%s-%d-%0.3f-[%d,%d]", name, ageNum, wageNum, wageLower, wageUpper);
		strcpy(resu2, resu);
		sprintf(resu3, "%s", resu);
		printf("%s\n%s\n%s\n\n", resu, resu2, resu3);  
		

      /* use scanf to read again */
	printf("Enter name, age and wage (xxx to quit): ");
     	scanf("%s %s %s", name, age, wage);
	
      } 
      return 0;
}
