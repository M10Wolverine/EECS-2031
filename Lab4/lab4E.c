/***************************************
* EECS2031Z Lab4 *
* Filename: Lab4E *
* Author: Zhang, Alan *
* Email: alanzhan@my.yorku.ca *
* EECS_username: alanzhan *
* York Student #: 215677214 * 
****************************************/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

 
#define ROWS 20
#define COLUMNS 30
#define SIZE 10

int main(int argc, char *argv[])
{
    char inputs_table [ROWS][COLUMNS];
    
    char quit[] = "xxx";

    char name[SIZE];
    int age;
    float wage;    

    int i;
    int j=0;
		
    printf("Enter name age and wage: ");
    scanf("%s %d %f", &name , &age, &wage ); 

    while (strcmp(quit, name))        
    {  
	/*save value to array*/
	sprintf(inputs_table[j], "%s %d %0.2f", name, age, wage);
	j++;

	/*Convert name to uppercase*/
	i=0;
	while (islower(name[i]))
	{
		name[i] = toupper(name[i]);
		i++;
	}
	   
	/*Modify age and wage*/
	age+=10;
	wage=wage*1.5;
          
	/*Save modified values to next line*/
	sprintf(inputs_table[j], "%s %d %0.2f", name, age, wage);
	j++;

       /* read again  */ 
       printf("Enter name age and wage: ");
       scanf("%s %d  %f", &name , &age , &wage );
           
    }
     printf("\nRecords generated in %s on %s %s\n",__FILE__ ,__DATE__ ,__TIME__ );  
     /* now display the input_table row by row */      
	for (i=0; i<j; i++)
	{
		printf("%s\n", inputs_table[i]);
	}
	
     return 0;
}

