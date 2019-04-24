/***************************************
* EECS2031Z Lab5 *
* Filename: Lab5C *
* Author: Zhang, Alan *
* Email: alanzhan@my.yorku.ca *
* EECS_username: alanzhan *
* York Student #: 215677214 * 
****************************************/
#include <stdio.h>
#include <string.h>

#define SIZE 40

int isPalindrome (char *);
void printReverse (char *);

#define quit "quit\n"

int main ()
{   
   int result;  char c; int i;  int count=0;
   char arr[SIZE];
  
   fgets(arr,SIZE,stdin);
   while (strcmp(arr, quit))
   {
      arr[strlen(arr)-1] = '\0'; // remove the trailing \n
      // print backward
      printReverse(arr);
   
      result = isPalindrome (arr);
      if (result==1) 
         printf ("\nIs a case-insensitive palindrome.\n\n");
      else 
         printf ("\nNot a case-insensitive palindrome.\n\n");
 
      fgets(arr,SIZE,stdin);
    }
    
    return 0;
}


int isPalindrome (char * str)
{
	int length = strlen(str);
	char temp;
	int i;
	for (i=0; i<length/2; i++)
	{
		/*First check if its a letter, and convert to upper/lower case*/
		if (*(str+i) >= 'A' && *(str+i) <='Z')
		{
			temp = *(str+(length-1-i));
			temp = toupper(temp);
			if (*(str+i) != temp)
			{
				return 0;
			}
		}
		else if (*(str+i) >= 'a' && *(str+i) <= 'z')
		{
			temp = *(str+(length-1-i));
			temp = tolower(temp);
			if (*(str+i) != temp)
			{
				return 0;
			}
		}
		/*Otherwise just check directly against each other*/
		else if (*(str+i) != *(str+(length-1-i)))
		{
			return 0;
		}
		
		
	}
	return 1;
}

// assume the \n was removed manually
void printReverse(char * str){
  int i = strlen(str) -1;
  while ( i >=0 ){
     printf("%c", *(str+i) );  // or  putchar(*(str+i));
     i--;
  }
}
