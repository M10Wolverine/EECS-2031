/***************************************
* EECS2031Z Lab3 *
* Filename: Lab3Conversion *
* Author: Zhang, Alan *
* Email: alanzhan@my.yorku.ca *
* EECS_username: alanzhan *
* York Student #: 215677214 * 
****************************************/

#include <stdio.h>

float fun_IF(int, char, float);
float fun_II(int, char, int);
float fun_FF(float, char, float);

int main(int argc, char *argv[])
{
	int numOne;
	char symbol;
	float numTwo; 

	float ansOne;
	float ansTwo;
	float ansThree;

   while (1)
   {
   	printf("Enter operand_1 operator operand_2 separated by blanks>");
	scanf("%d %c %f", &numOne, &symbol, &numTwo);
	
	/*Checks for special case where both equal -1*/	
	if (numOne == -1 && numTwo == -1)
	{
		return 0;
	}
	
	/*Save results of operations, return results*/
	ansOne=fun_IF(numOne, symbol, numTwo);
	ansTwo = fun_II(numOne, symbol, numTwo);
	ansThree = fun_FF(numOne, symbol, numTwo);

	printf("Your input '%d %c %f' results in %f (fun_IF) and %f (fun_II) and %f (fun_FF)\n\n", numOne, symbol, numTwo, ansOne, ansTwo, ansThree);
    }	
	return 0;
}

/*nTwo is float, so uses float version of operation
Then returns the float value of the operation*/
float fun_IF(int nOne, char sym, float nTwo)
{
	float f;
	if (sym == '+')
	{
		f= nTwo + nOne;
	}
	else if (sym == '-')
	{
		f = nOne - nTwo;
	}
	else if (sym == '*')
	{
		f= nOne*nTwo;
	}
	else if (sym == '/')
	{
		f= nOne/nTwo;
	}
	return f;
}

/*Implicity converts nTwo to int and truncates any decimals
Then does integer version of operant, which returns another int that has no decimals*/
float fun_II(int nOne, char b, int nTwo)
{	
	float f;
	if (b == '+')
	{
		f= nOne+nTwo;
	}
	else if (b == '-')
	{
		f= nOne-nTwo;
	}
	else if (b == '*')
	{
		f= nOne*nTwo;
	}
	else if (b == '/')
	{
		f= nOne/nTwo;
	}
	return f;
}

/*Implicity converts nOne to float, and uses float version of operation*/
float fun_FF(float nOne, char b, float nTwo)
{
	float f;
	if (b == '+')
	{
		f=nOne+nTwo;
	}
	else if (b == '-')
	{
		f=nOne-nTwo;
	}
	else if (b == '*')
	{
		f=nOne*nTwo;
	}
	else if (b == '/')
	{
		f=nOne/nTwo;
	}
	return f;
}
