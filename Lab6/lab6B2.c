/***************************************
* EECS2031Z Lab6 *
* Filename: Lab6B *
* Author: Zhang, Alan *
* Email: alanzhan@my.yorku.ca *
* EECS_username: alanzhan *
* York Student #: 215677214 * 
****************************************/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void exchange(char[][]);
void printArray(char[][], int);
 
#define ROWS 31
#define COLUMNS 50
#define SIZE 10

int main(int argc, char *argv[])
{
    char input [ROWS][COLUMNS];
    
    char quit[] = "xxx\n";    
    char temp[COLUMNS];
	
    int current_row=0;
		
    printf("Enter string: ");	
    fgets(input[current_row], COLUMNS, stdin);	//add a /n  

    while (strcmp(input[current_row], quit))        
    {  
	current_row++;

       /* read again  */ 
	printf("Enter string: ");
        fgets(input[current_row], COLUMNS, stdin);           
    }
	printArray(input, current_row);
	printf("== after swapping ==\n");
	strcpy(temp, input[0]);
	strcpy(input[0], input[1]);
	strcpy(input[1], temp);
	exchange(input);
	printArray(input, current_row);
	
     return 0;
}

void exchange(char input[][])
{
	char temp[COLUMNS];
	strcpy(temp, input[2]);
	strcpy(input[2], input[3]);
	strcpy(input[3], temp);
	strcpy(temp, input[4]);
	strcpy(input[4],input[5]);
	strcpy(input[5], temp); 
	
}

void printArray(char input[][], int n)
{
	int i=0;
	for (i; i<n; i++)
	{
		printf("[i]: %s", input[i]);
	}
}
